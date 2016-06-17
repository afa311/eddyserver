#include <iostream>
#include <DBProxy/Private/ConnectorMySQL.h>

int main(int argc, char *argv[])
{
	dbproxy::ConnectorMySQLPointer connector;
	try
	{
		dbproxy::ErrorCode error;
		connector = std::make_shared<dbproxy::ConnectorMySQL>("192.168.1.201", 3306, "root", "123456", 3);

		connector->SetCharacterSet("utf8", error);
		if (error)
		{
			std::cout << "�����ַ�����ʧ�ܣ�" << std::endl;
		}

		connector->SelectDatabase("sgs", error);
		if (error)
		{
			std::cout << "ѡ�����ݿ�ʧ�ܣ�" << std::endl;
		}

		auto result = connector->Select("SELECT * FROM `actor`;", error);
		if (error)
		{
			std::cout << "��ѯ���ݿ�ʧ�ܣ�" << std::endl;
		}
		else
		{
			dbproxy::ResultWrap wrap = result.Wrap();
			for (size_t row = 0; row < wrap.NumRows(); ++row)
			{
				for (size_t col = 0; col < wrap.NumField(); ++col)
				{
					std::cout << wrap.Value(row, col) << std::endl;
				}
				std::cout << "---------------------------------------" << std::endl;
			}
		}

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	system("pause");
	return 0;
}