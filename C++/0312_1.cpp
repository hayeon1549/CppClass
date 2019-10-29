#include <iostream>
using namespace std;

//네임스페이스의 중첩
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

//클래스
class USERDATA {
public: //접근 제어 지시자
	int nAge; //멤버 변수(데이터)
	char szName[32];

	void Print(void) { 
		//멤버 함수(메서드)
		printf("%d,%s\n", nAge, szName);
		cout << nAge << szName << endl;
	}
};

int main() {
	USERDATA u = { 20,"hayeon" };
	u.Print();
}