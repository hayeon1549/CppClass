#include <iostream>
using namespace std;

/*
// ������ �ڵ�
class CMyData
{
public:
	CMyData() { m_pszData = new char[32]; }
	virtual ~CMyData()
	{
		cout << "~CMyData()" << endl;
		delete m_pszData;
	}

private:
	char *m_pszData;
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx() { m_pnData = new int; }
	~CMyDataEx()
	{
		cout << "~CMyDataEx()" << endl;
		delete m_pnData;
	}

private:
	int *m_pnData;
};

// ����� �ڵ�
int main()
{
	CMyData *pData = new CMyDataEx;

	// ���� ���Ŀ� �´� �Ҹ��ڰ� ȣ��ȴ�.
	delete pData;
	
	//delete ������ ������ ��� ���� ������ �Ҹ��ڸ�
	//ȣ��ǰ� �� ������ �Ҹ��ڰ� ȣ����� �ʴ� �ɰ���
	//������ ������ �߻��Ѵ�.

	return 0;
}
*/

#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData()
	{
		cout << "CMyData()" << endl;
	}

	virtual ~CMyData() {}
	virtual void TestFunc1() { }
	virtual void TestFunc2() {}
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx()
	{
		cout << "CMyDataEx()" << endl;
	}

	virtual ~CMyDataEx() { }
	virtual void TestFunc1() { }
	virtual void TestFunc2()
	{
		cout << "TestFunc2()" << endl;
	}
};

int main()
{
	CMyData *pData = new CMyDataEx;
	pData->TestFunc2();
	delete pData;

	return 0;
}