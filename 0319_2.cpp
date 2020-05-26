#include <iostream>
using namespace std;

//참조 형식 멤버 초기화
/*class CRefTest
{
public:

	//참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다
	CRefTest(int &rParam) : m_nData(rParam) {};

	int GetData(void) { return m_nData; }

private:
	int &m_nData;
};

int main()
{
	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	//참조 원본인 a의 값이 수정되었다.
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}*/

class CMyPoint
{
public:
	CMyPoint(int x)
	{
		cout << "CMyPoint(int)" << endl;
		if (x > 100)
			x = 100;

		m_x = 100;
	}

	CMyPoint(int x, int y)
		:CMyPoint(x)
	{
		if (y > 200)
			y = 200;

		m_y = 200;
	}

	void Print()
	{
		cout << "X : " << m_x << endl;
		cout << "Y : " << m_y << endl;
	}

private:
	int m_x = 0;
	int m_y = 0;
};

int main()
{
	CMyPoint ptBegin(110);
	ptBegin.Print();

	CMyPoint ptEnd(50, 250);
	ptEnd.Print();
}