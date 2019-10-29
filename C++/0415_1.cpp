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
		cout << "하이" << endl;

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
		int n = m; //새로운 변수를 만들어 현재 값을 저장시킨다.
		m++; //값을 증가시킨다.

		return n; //현재 출력 결과는 변하지 않으므로 n을 return한다.
	}
};

int main()
{
	c a(10);

	cout << ++a << endl; //전위 증가 연산자 호출
	cout << a++ << endl; //후위 증가 연산자 호출
	cout << a << endl;

	return 0;
}