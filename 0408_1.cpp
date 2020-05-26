#include <iostream>
using namespace std;

//변환 생성자
/*class cnumber
{
public:
	int m_value;

	cnumber() {}
	explicit cnumber(int value)
	{
		m_value = value;
	}

};

int main()
{
	cnumber a;
	cnumber b;

	a.m_value = 1;
	b.m_value = 2;

	cnumber sum1 = 1 + 2;
	//cnumber sum2 = a + 2;
	//cnumber sum3 = 1 + b;
	//cnumber sum4 = a + b;

	return 0;
}*/

//operator 연산자
/*class ctest
{
public:
	int m_value = 0;
};

ctest operator + (const ctest& arg1, int arg2)
{
	ctest t;
	t.m_value = arg1.m_value + arg2;

	return t;
}

ctest operator + (int arg1,const ctest& arg2)
{
	ctest t;
	t.m_value = arg1 + arg2.m_value;

	return t;
}

int main()
{
	ctest t;
	t.m_value = 1;

	ctest s1 = t + 2;
	//ctest s1 = t.operator+(2);
	ctest s2 = 2 + t;

	return 0;
}*/

//전체 복습
/*class c
{
public:
	~c()
	{
		cout << "~c()" << endl;
	}

	//변환 생성자
	c(int n) :m(n)
	{
		cout << "c(int)" << endl;
	}

	//복사 생성자
	c(const c &r) :m(r.m)
	{
		cout << "c(const c &)" << endl;
	}

	//이동 생성자
	c(const c &&r) :m(r.m)
	{
		cout << "c(const c &&)" << endl;
	}

	//형변환
	operator int() { return m; }

	//+
	c operator+(const c &r)
	{
		cout << "operator+" << endl;
		c result(0);
		result.m = this->m + r.m;

		return result;
	}

	//=
	c& operator=(const c &r)
	{
		cout << "operator=" << endl;
		m = r.m;

		return *this;
	}

private:
	int m = 0;
};

int main()
{
	cout << "Begin" << endl;
	c a(0), b(3), c(4);

	//b+c 연산을 실행하면 이름 없는 임시 객첵가 만들어지며 a에 대입하는 것은 이 임시 객체다.
	a = b + c;
	cout << a << endl;
	cout << "End" << endl;

	return 0;
}*/

class c
{
	int *m = nullptr;

public:
	explicit c(int n)
	{
		m = new int(n);
	}
	
	~c() { delete m; }
	
	operator int() { return *m; }

	void operator=(const c &r)
	{
		delete m; //a의 m을 삭제

		m = new int(*r.m);
	}
};

int main()
{
	c a(0), b(5);
	a = b;
	cout << a << endl;

	return 0;
}