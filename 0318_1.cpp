#include <iostream>
using namespace std;

//생성자 함수

/*
//제작자 코드
class CTest
{
public:

	//CTest 클래스의 '생성자 함수' 선언 및 정의
	CTest() //생성자 함수의 이름은 클래스 이름과 동일해야함
		:m_nData(10), test(20) //초기화 목록
	{
		//m_nData = 10;
	}

	//멤버 데이터 선언
	int m_nData = 10; //C++11부터 지원 됨
	int test;

	//멤버 함수 선언 및 정의
	void PrintData(void);
};

void CTest::PrintData(void)
{
	//멤버 데이터에 접근하고 값을 출력
	//int m_nData = 20; //지역변수의 우선순위가 더 높다
	cout << m_nData << endl;
}

//사용자 코드
int main()
{
	CTest t; //선언 후 생성자 함수 호출
	t.PrintData();

	return 0;
}
*/

/*\class CMyData
{
	//기본 접근 제어 지시자는 private이다
	int m_nData;
public:
	int GetData(void) { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

int main()
{
	CMyData data;
	//data.m_nData = 10;
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}*/

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a; //전역변수일 경우 가장 먼저 호출되고 프로그램이 끝날 때(메인함수가 끝날 때) 소멸
	cout << "End" << endl;

	return 0;
} //a가 지역변수이기 때문에 객체는 메인함수가 끝날 때 소멸