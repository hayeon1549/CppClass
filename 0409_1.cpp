#include <iostream>
using namespace std;

//���� ���� ������
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

	c& operator=(const c &r)
	{
		if (this == &r)
		{
			return *this;
		}
		delete m; //a�� m�� ����

		m = new int(*r.m);
	}

	c& operator*=(const c &r)
	{
		int *p = new int(*m);

		*p *= *r.m;

		delete m;
		m = p;

		return *this;
	}
};

int main()
{
	c a(1), b(5), c(10);
	//a = b = c;
	a *= b;
	a *= c;
	cout << a << endl;

	return 0;
}*/

//�̵� ���� ������
/*class c
{
	int *m = nullptr;

public:
	explicit c(int n)
	{
		cout << "c(int)" << endl;
		m = new int(n);
	}

	c(const c &r)
	{
		cout << "c(const c &)" << endl;

		m = new int(*r.m);
	}

	~c() { delete m; }

	operator int() { return *m; }

	c operator+(const c &r)
	{
		return c(*m + *r.m);
	}

	c& operator=(const c &r)
	{
		cout << "operator=" << endl;

		if (this == &r)
		{
			return *this;
		}
		delete m; 
		m = new int(*r.m);

		return *this;
	}

	c& operator=(c &&r)
	{
		cout << "operator=(move)" << endl;

		m = r.m;
		r.m = NULL;

		return *this;
	}
};

int main()
{
	c a(0), b(3), c(4);
	cout << "Before" << endl;

	a = b + c;
	cout << "After" << endl;

	cout << a << endl;
	a = b;
	cout << a << endl;

	return 0;
}*/

//�迭 ������
class c
{
	int *m; //�迭�� �޸�
	int mnsize; //�迭 ����� ����
	
public:
	c(int nsize)
	{
		m = new int[nsize];
		memset(m, 0, sizeof(int)*nsize);
	}

	~c() { delete m; }

	//����� ������ ����� �迭 ������
	int operator[](int n) const
	{
		cout << "operator[] const" << endl;
		return m[n];
	}

	int& operator[](int n)
	{
		cout << "operator[]" << endl;
		return m[n];
	}
};

void T(const c &a)
{
	cout << "T()" << endl;

	//����� �����̹Ƿ� 'operator[](int n) const�� ȣ���Ѵ�
	cout << a[3] << endl;
}

int main()
{
	c arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i * 10;
	}

	T(arr);

	return 0;
}