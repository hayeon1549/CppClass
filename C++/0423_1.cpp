#include <iostream>
#include <string>
using namespace std;

//���� ���� Ŭ����
/*
// ���� ������ �ڵ�
class CMyInterface
{
public:
	CMyInterface()
	{
		cout << "CMyInterface()" << endl;
	}

	// ���� �ְ� ���Ǵ� ���� ���� ���� �Լ�
	virtual int GetData() const = 0;
	virtual void SetData(int nParam) = 0;
};

// �ı� ������ �ڵ�
class CMyData : public CMyInterface
{
public:
	CMyData() { cout << "CMyData()" << endl; }

	// ���� ���� �Լ��� �Ļ� Ŭ�������� '�ݵ��' �����ؾ� �Ѵ�.
	virtual int GetData() const { return m_nData; }
	virtual void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

// ����� �ڵ�
int main()
{
	// ���� ���� Ŭ������ �ν��Ͻ��� ���� �� ������ �� ����.
	// CMyInterface a;
	CMyData a;
	a.SetData(5);
	cout << a.GetData() << endl;

	return 0;
}
*/


// �ʱ� �������� �ڵ�
class CMyObject
{
public:
	CMyObject() { }
	virtual ~CMyObject() { }

	// ��� �Ļ� Ŭ������ �� �޼��带 �����ٰ� ������ �� �ִ�.
	virtual int GetDeviceID() = 0;

protected:
	int m_nDeviceID;
};

// �ʱ� �����ڰ� ���� �Լ�
void PrintID(CMyObject *pObj)
{
	// ������ � �������� ������ �׷��� ID�� ����� �� �ִ�!
	cout << "Device ID: " << pObj->GetDeviceID() << endl;
}

// �ı� �������� �ڵ�
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

// ����� �ڵ�
int main()
{
	CMyTV a(5);
	CMyPhone b(10);

	// ���� ��ü�� �����̵� �˾Ƽ� �ڽ��� ID�� ����Ѵ�.
	::PrintID(&a);
	::PrintID(&b);

	return 0;
}