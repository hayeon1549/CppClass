#include <iostream>
using namespace std;

//다중 정의=오버로딩, 오버라이딩=상속
/*int mi(int a, int b)
{
	return a - b;
}
double mi(double a, double b)
{
	return a - b;
}
int mi(double a, double b, double c)
{
	return a - b - c;
}
int mi(double a, double b, int c)
{
	return a - b - c;
}*/

//함수 템플릿
/*template <typename T>
//반환형식   함수이름      매개변수
T Add(T a, T b) //함수 이름이 같으면 안 된다
{
	return a + b;
}*/

//네임스페이스
/*


namespace Test2
{
	int g_nData = 20;
	void TestFunc(void)
	{
		cout << "Test2::TestFunc()" << endl;
	}
}*/

namespace Test //변수, 함수, 클래스 같은 각종요소들을 한 범주로 묶어주기 위한 문법
{
	int g_nData = 10;
	void TestFunc(void)
	{
		cout << "Test::TestFunc()" << endl;
	}
}

using namespace Test; //네임스페이스를 선언한 후에 써야한다

int main()
{
	/*cout << mi(1, 2) << endl;
	cout << mi(2.2,1.1) << endl;
	cout << mi(3.3, 2.2, 1.1) << endl;
	cout << mi(3.3, 2.2, 1) << endl;*/

	/*cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;*/

	/*Test1::TestFunc();
	cout << Test1::g_nData << endl;
	Test2::TestFunc();
	cout << Test2::g_nData << endl;*/

	cout << g_nData << endl;

	return 0;
}