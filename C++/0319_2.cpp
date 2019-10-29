#include <iostream>
using namespace std;

//���� ���� ��� �ʱ�ȭ
/*class CRefTest
{
public:

	//������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ�Ѵ�
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

	//���� ������ a�� ���� �����Ǿ���.
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