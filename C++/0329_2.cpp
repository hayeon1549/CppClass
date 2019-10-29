#include <iostream>
using namespace std;

//얕은 복사의 문제점
/*int main()
{
	int *pa, *pb;

	pa = new int;
	*pa = 10;
	pb = new int;
	//pb = pa;
	*pb = *pa;

	cout << *pa << endl;
	cout << *pb << endl;

	delete pa;
	delete pb;

	return 0;
}*/

//포인터가 없는 복사 생성자 이용
/*class C
{
public:
	C() { cout << "C()" << endl; }

	int GD(void)const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

int main()
{
	C a;
	a.SD(10);

	C b(a);
	cout << b.GD() << endl;

	return 0;
}*/

//포인터가 존재할 때 얕은 복사
class C
{
public:
	C(int n)
	{
		m = new int;
		*m = n;
	}
	
	//복사 생성자 선언 및 정의
	C(const C &r)
	{
		cout << "C(const C &)" << endl;

		//메모리를 할당
		m = new int;
		//포인터가 가리키는 위치에 값을 복사
		*m = *r.m;
	}

	//객체가 소멸하면 동적 할당한 메모리를 헤제
	~C()
	{
		delete m;
	}

	int GD()
	{
		if (m != NULL)
			return *m;

		return 0;
	}

private:
	//포인터 멤버 데이터
	int *m = nullptr;
};

int main()
{
	C a(10);
	C b(a);
	cout << a.GD() << endl;
	cout << b.GD() << endl;
}