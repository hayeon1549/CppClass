#include <iostream>
using namespace std;

/*class c
{
	int *m = nullptr;

public:
	explicit c(int n)
	{
		m = new int(n);
	}

	~c() { delete m; }

	operator int() { return *m; }

	int operator==(const c &r)
	{
		if (*this->m == *r.m)
			return 1;
		else
			return 0;
	}
};

int main()
{
	c a(3), b(3);
	if(a==b)
		cout << "����" << endl;

	return 0;
}*/

class c
{
	int m = 0;

public:
	c(int n) : m(n) {}

	operator int() { return m; }

	int operator++()
	{
		cout << "operator++()" << endl;
		return ++m;
	}

	int operator++(int)
	{
		cout << "operator++(int)" << endl;
		int n = m; //���ο� ������ ����� ���� ���� �����Ų��.
		m++; //���� ������Ų��.

		return n; //���� ��� ����� ������ �����Ƿ� n�� return�Ѵ�.
	}
};

int main()
{
	c a(10);

	cout << ++a << endl; //���� ���� ������ ȣ��
	cout << a++ << endl; //���� ���� ������ ȣ��
	cout << a << endl;

	return 0;
}