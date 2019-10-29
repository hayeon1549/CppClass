#include <iostream>
#include <string>
using namespace std;

//명시적 디폴트 생성자
/*class CTest
{
public:
	CTest(void) = default;
	int m_nData = 5;
};

//CTest::CTest(void){}

int main()
{
	CTest a;
	cout << a.m_nData << endl;

	return 0;
}*/

//this 포인터 1
/*class Student
{
private:
	int age;
	string name;

public:
	void student(int age, string name)
	{
		age = age; //멤버변수 age = 매개변수 age
		name = name;
	}

	void print()
	{
		cout << "이름: " << name << " 나이: " << age << endl;
	}
};

int main()
{
	Student stu;
	stu.student(18, "hayeon");
	stu.print();

	return 0;
}*/

//this 포인터 2
/*class CMyData
{
public:
	CMyData(int nParam) : m_nData(nParam) {};
	void PrintData()
	{
		cout << m_nData << endl;

		cout << CMyData::m_nData << endl;

		cout << this->m_nData << endl;

		cout << this->CMyData::m_nData << endl;
	}

private:
	int m_nData;
};

int main()
{
	CMyData a(5), b(10);
	a.PrintData();
	b.PrintData();

	return 0;
}*/

//상수형 메서드
/*class CTest
{
public:
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {};

	int GetData() const //상수형 메서드는 쓰기를 할 수 없다
	{
		//상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다
		m_nData = 20;
		return m_nData;
	}

	int SetData(int nParam) { m_nData = nParam; }

private:
	mutable int m_nData = 0;
};

int main()
{

	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}*/

//const_cast를 사용한 상수형 참조 변경
/*void TestFunc(const int &nParam)
{
	int &nNewParam = const_cast<int &>(nParam);

	nNewParam = 20;
}

int main()
{
	int nData = 10;

	TestFunc(nData);

	cout << nData << endl;

	return 0;
}*/

//멤버 함수 다중 정의 1
/*void TestFunc(int nParam)
{
	cout << nParam << endl;
}

int main()
{
	TestFunc(10);
	TestFunc(5.5);

	return 0;
}*/

//delete 예약어를 사용해 컴파일 오류 발생
/*class CMyData
{
public:
	CMyData() : m_nData(0) {};

	int GetData(void) { return m_nData; }
	void   SetData(double dParam) = delete;
	//setdata에 더블형이 넘어오면 오류가 뜬다

private:
	int m_nData;
};

int main()
{
	CMyData a;

	a.SetData(10); 
	cout << a.GetData() << endl;

	CMyData b;

	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;
}*/

class CTest
{
public:
	CTest(int nParam) : m_nData(nParam) { m_nCount++; }
	int GetData() { return m_nData; };
	void ResetCount() { m_nCount = 0; };

	static int GetCount()
	{
		return m_nCount;
	}

private:
	int m_nData;
	static int m_nCount;
};

int CTest::m_nCount = 0;

int main()
{
	CTest a(5), b(10);

	cout << a.GetCount() << endl;
	b.ResetCount();

	cout << CTest::GetCount() << endl;

	return 0;
}