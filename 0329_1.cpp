#include <iostream>
using namespace std;

//복사생성자
/*class CMyData
{
public:
	CMyData() { cout << "CMyData()" << endl; }

	CMyData(const CMyData &rhs)
		:m_nData(rhs.m_nData)
	{
		this->m_nData = rhs.m_nData;
		cout << "CMyData(const CMyData &)" << endl;
	}


	int GetData(void) const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

int main()
{
	//디폴트 생성자가 호출되는 경우
	CMyData a;
	a.SetData(10);

	//복사 생성자가 호출되는 경우
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}*/

//함수 호출과 복사 생성자
class CTestData
{
public:
	CTestData(int nParam) :m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData &rhs) :m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	//복사생성을 삭제
	//CTestData(const CTestData &rhs) = delete;

	//읽기 전용 상수형 메서드
	int GetData() const { return m_nData; }
	//멤버 변수에 쓰기를 시도하는 메서드
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

//피호출자 함수에서 매개변수 인스턴스의 값을 변경
void TestFunc(CTestData param) //객체가 2개나 생성되므로 참조자 형식(&)를 사용하면 객체를 1개만 생성할 수 있다
{
	cout<<"TestFunc()"<<endl;
	//피호출자 함수에서 매개변수 인스턴스의 값을 변경
	param.SetData(20); //복사 생성자가 호출된다
}

int main()
{
	cout << "***Begin***" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a : " << a.GetData() << endl;

	cout << "***End***" << endl;
}