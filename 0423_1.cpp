#include <iostream>
#include <string>
using namespace std;

//순수 가상 클래스
/*
// 최초 설계자 코드
class CMyInterface
{
public:
	CMyInterface()
	{
		cout << "CMyInterface()" << endl;
	}

	// 선언만 있고 정의는 없는 순수 가상 함수
	virtual int GetData() const = 0;
	virtual void SetData(int nParam) = 0;
};

// 후기 개발자 코드
class CMyData : public CMyInterface
{
public:
	CMyData() { cout << "CMyData()" << endl; }

	// 순수 가상 함수는 파생 클래스에서 '반드시' 정의해야 한다.
	virtual int GetData() const { return m_nData; }
	virtual void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

// 사용자 코드
int main()
{
	// 순수 가상 클래스는 인스턴스를 선언 및 정의할 수 없다.
	// CMyInterface a;
	CMyData a;
	a.SetData(5);
	cout << a.GetData() << endl;

	return 0;
}
*/


// 초기 제작자의 코드
class CMyObject
{
public:
	CMyObject() { }
	virtual ~CMyObject() { }

	// 모든 파생 클래스는 이 메서드를 가졌다고 가정할 수 있다.
	virtual int GetDeviceID() = 0;

protected:
	int m_nDeviceID;
};

// 초기 제작자가 만든 함수
void PrintID(CMyObject *pObj)
{
	// 실제로 어떤 것일지는 모르지만 그래도 ID는 출력할 수 있다!
	cout << "Device ID: " << pObj->GetDeviceID() << endl;
}

// 후기 제작자의 코드
class CMyTV : public CMyObject
{
public:
	CMyTV(int nID) { m_nDeviceID = nID; }
	virtual int GetDeviceID()
	{
		cout << "CMyTV::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

class CMyPhone : public CMyObject
{
public:
	CMyPhone(int nID) { m_nDeviceID = nID; }
	virtual int GetDeviceID()
	{
		cout << "CMyPhone::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

// 사용자 코드
int main()
{
	CMyTV a(5);
	CMyPhone b(10);

	// 실제 객체가 무엇이든 알아서 자신의 ID를 출력한다.
	::PrintID(&a);
	::PrintID(&b);

	return 0;
}