#include <iostream>
using namespace std;

//���ӽ����̽��� ��ø
/*namespace TEST
{
	int g_nData = 100;
	namespace DEV
	{
		int g_nData = 200;
		namespace WIN
		{
			int g_nData = 300;
		}
	}
}

int main()
{
	cout << TEST::g_nData << endl;
	cout << TEST::DEV::g_nData << endl;
	cout << TEST::DEV::WIN::g_nData << endl;

	return 0;
}*/

/*int nData = 200;

namespace TEST
{
	int nData = 10;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}*/

//Ŭ����
class USERDATA {
public: //���� ���� ������
	int nAge; //��� ����(������)
	char szName[32];

	void Print(void) { 
		//��� �Լ�(�޼���)
		printf("%d,%s\n", nAge, szName);
		cout << nAge << szName << endl;
	}
};

int main() {
	USERDATA u = { 20,"hayeon" };
	u.Print();
}