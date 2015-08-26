﻿#include "MainWindow.h"

#include <QFile>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QFileDialog>

#include "CategoryView.h"
#include "DocumentTableView.h"


MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags)
	: QMainWindow(parent, flags)
	, database_(new DataSource())
	, document_view_(new DocumentTableView(this))
	, category_view_(new CategoryView(database_, this))
{
	setupFileActions();
	setMinimumSize(QSize(960, 540));

	QSplitter *splitter = new QSplitter(Qt::Horizontal, this);
	splitter->addWidget(category_view_);
	splitter->addWidget(document_view_);
	splitter->setStretchFactor(0, 20);
	splitter->setStretchFactor(1, 80);
	setCentralWidget(splitter);

	statusBar();

	connect(database_.data(), &DataSource::categoryCreated, category_view_, &CategoryView::categoryCreated);
	connect(database_.data(), &DataSource::categoryDeleted, category_view_, &CategoryView::categoryDeleted);
	connect(database_.data(), &DataSource::categoryModified, category_view_, &CategoryView::categoryModified);
}

MainWindow::~MainWindow()
{

}

void MainWindow::setupFileActions()
{
	QToolBar *tb = new QToolBar(this);
	tb->setWindowTitle(QStringLiteral("文件操作"));
	addToolBar(tb);

	QMenu *menu = new QMenu(QStringLiteral("文件"), this);
	menuBar()->addMenu(menu);

	QAction *new_action = new QAction(QIcon(":/images/file-new.png"), QStringLiteral("新建"), this);
	new_action->setShortcut(QKeySequence::New);
	menu->addAction(new_action);
	tb->addAction(new_action);
	QObject::connect(new_action, &QAction::triggered, this, &MainWindow::newFile);

	menu->addSeparator();

	QAction *open_action = new QAction(QIcon(":/images/file-open.png"), QStringLiteral("打开"), this);
	open_action->setShortcut(QKeySequence::Open);
	menu->addAction(open_action);
	tb->addAction(open_action);
	QObject::connect(open_action, &QAction::triggered, this, &MainWindow::openFile);

	menu->addSeparator();

	QAction *save_action = new QAction(QIcon(":/images/file-save.png"), QStringLiteral("保存"), this);
	save_action->setShortcut(QKeySequence::Save);
	menu->addAction(save_action);
	tb->addAction(save_action);
	QObject::connect(save_action, &QAction::triggered, this, &MainWindow::saveFile);
}

void MainWindow::newFile()
{
	database_->clear();
	curr_opened_file_.clear();
}

void MainWindow::openFile()
{
	curr_opened_file_ = QFileDialog::getOpenFileName(this, QStringLiteral("打开"), ".", "Password files (*.pw)");
	if (!curr_opened_file_.isEmpty())
	{
		QFile file(curr_opened_file_);
		file.open(QIODevice::OpenModeFlag::ReadOnly);
		database_->importData(file.readAll());
	}
}

void MainWindow::saveFile()
{
	if (!curr_opened_file_.isEmpty())
	{
		QFile file(curr_opened_file_);
		file.open(QIODevice::ReadWrite);
		file.write(database_->exportData());
	}
	else if (!database_->empty())
	{
		QString out_file = QFileDialog::getSaveFileName(this, QStringLiteral("保存"), "untitled.pw", "Password files (*.pw)");
		if (!out_file.isEmpty())
		{
			QFile file(out_file);
			file.open(QIODevice::WriteOnly);
			file.write(database_->exportData());
			curr_opened_file_ = out_file;
		}
	}
}