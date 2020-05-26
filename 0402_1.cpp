#include <iostream>
using namespace std;

//대입 생성자
/*class C
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

	C& operator+=(const C &r)
	{
		*m = *r.m;

		//객체 자신에 대한 참조를 반환
		return *this;
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
	C b(20);

	//단순 대입을 시도하면 모든 멤버의 값을 그대로 복사한다.
	a += b;
	cout << a.GD() << endl;

	return 0;
}*/

//변환 생성자
/*class C
{
public:
	//매개변수가 하나뿐인 생성자는 형변환이 가능하다.
	//explicit C(int n) :m(n) 선언시 컴파일러 마음대로 형변환하는 것을 막을 수 있다.
	C(int n) :m(n) //변환 생성자
	{
		cout << "C(int)" << endl;
	}

	C(const C &r) : m(r.m)
	{
		cout << "C(const C &)" << endl;
	}

	int GD() const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

//매개변수가 클래스 형식이며 변환 생성이 가능하다.
void TF(C p) //참조자 형식 불가
{
	cout << "TF(): " << p.GD() << endl;
}

int main()
{
	//int 자료형에서 C 형식으로 변환될 수 있다.
	TF(5); //객체를 넘겨줘야 하는데 정수형 자료를 넘겨줬으므로 오류가 나야하지만 변환 생성자가 있기 때문에 Tf(C(5))로 실행된다.

	return 0;
}*/

//허용되는 변환
class C
{
public:
	explicit C(int n) :m(n){}

	//C 클래스는 int 자료형으로 변환될 수 있다
	operator int(void) { return m; }

	int GD() const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

int main()
{
	C a(10);
	cout << a.GD() << endl;

	//C 형식에서 int 자료형으로 변환될 수 있다
	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>a << endl;

	return 0;
}