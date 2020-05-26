#include <iostream>
using namespace std;

//가상함수
/*
// 초기 제작자
#define DEFAULT_FARE 1000

class CPerson
{
public:
	CPerson() { }
	virtual ~CPerson() {
		cout << "virtual ~CPerson()" << endl;
	}

	// 요금 계산 인터페이스(순수 가상 함수)
	virtual void CalcFare() = 0;

	virtual unsigned int GetFare() { return m_nFare; }

protected:
	unsigned int m_nFare = 0;
};

// 초기 혹은 후기 제작자
class CBaby : public CPerson
{
public:
	~CBaby() {
		cout << "~CBaby()" << endl;
	}
	// 영유아(0~7세) 요금 계산
	virtual void CalcFare() {
		m_nFare = 0;	// 0%
	}
};

class CChild : public CPerson
{
public:
	~CChild() {
		cout << "~CChild()" << endl;
	}
	// 어린이(8~13세) 요금 계산
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE * 50 / 100;	// 50%
	}
};

class CTeen : public CPerson
{
public:
	~CTeen() {
		cout << "~CTeen()" << endl;
	}
	// 청소년(14~19세) 요금 계산
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE * 75 / 100;	// 75%
	}
};

class CAdult : public CPerson
{
public:
	~CAdult() {
		cout << "~CAdult()" << endl;
	}
	// 성인(20세 이상) 요금 계산
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE;	// 100%
	}
};

// 사용자 코드
int main()
{
	CPerson* arList[3] = { 0 };
	int nAge = 0;

	// 1. 자료 입력: 사용자 입력에 따라서 생성할 객체 선택
	for (auto &person : arList) //auto 범위기반 포문
	{
		cout << "나이를 입력하세요: ";
		cin >> nAge;
		if (nAge < 8)
			person = new CBaby; 

		else if (nAge < 14)
			person = new CChild;

		else if (nAge < 20)
			person = new CTeen;

		else
			person = new CAdult;

		// 생성한 객체에 맞는 요금이 자동으로 계산된다.
		person->CalcFare(); //함수가 가상함수면 실형식이 호출되므로 생성한 객체에 맞는 CalcFare()가 호출된다.
	}

	// 2. 자료 출력: 계산한 요금을 활용하는 부분
	for (auto person : arList)
		cout << person->GetFare() << "원" << endl;

	// 3. 자료 삭제 및 종료
	for (auto person : arList)
		delete person;

	return 0;
}
*/

//형식형변환
/*class CMyData
{
public:
	CMyData() { }
	virtual ~CMyData() { }
	void SetData(int nParam) { m_nData = nParam; }
	int GetData() { return m_nData; }

private:
	int m_nData = 0;
};

class CMyDataEx : public CMyData
{
public:
	void SetData(int nParam)
	{
		if (nParam > 10)
			nParam = 10;

		CMyData::SetData(nParam);
	}

	void PrintData()
	{
		cout << "PrintData(): " << GetData() << endl;
	}
};

int main()
{
	// 파생 형식 객체를 기본 형식으로 포인팅합니다.
	CMyData *pData = new CMyDataEx;
	CMyDataEx *pNewData = NULL;

	// CMyData::SetData() 함수를 호출합니다.
	// 따라서 10이 넘는지 검사하지 않습니다.
	pData->SetData(15);

	// 기본 형식에 대한 포인터이나 가리키는 대상은 파생 형식입니다.
	// 이 사실이 명확하므로 파생 형식에 대한 포인터로 형변환을 시도합니다.
	pNewData = static_cast<CMyDataEx*> (pData); //상속 관계 : 부모->자식, 자식->부모로 형변환을 할 때만 사용할 수 있다.
	pNewData->PrintData();
	delete pData;

	return 0;
}*/

class CMyData
{
public:
CMyData(int nParam) :m_nData(nParam) { }

CMyData operator+(const CMyData &rhs)
{
return CMyData(m_nData + rhs.m_nData);
}

CMyData& operator=(const CMyData &rhs)
{
m_nData = rhs.m_nData;

return *this;
}

operator int() { return m_nData; }

protected:
int m_nData = 0;
};

class CMyDataEx : public CMyData
{
public:
CMyDataEx(int nParam) : CMyData(nParam) { }
CMyDataEx operator+(const CMyDataEx &rhs)
{
return CMyDataEx(static_cast<int>(CMyData::operator+(rhs)));
}

//인터페이스를 맞춰주기 위한 연산자 다중 정의
using CMyData::operator+;
using CMyData::operator=;
};

int main()
{
CMyData a(3), b(4);
cout << a + b << endl;

CMyDataEx c(3), d(4), e(0);

// CMyDataEx 클래스에 맞는 단순 대입 연산자가 없어서 컴파일 오류가 발생한다.
e = c + d;
cout << e << endl;

return 0;
}