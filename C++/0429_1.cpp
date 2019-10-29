#include <iostream>
using namespace std;

//�����Լ�
/*
// �ʱ� ������
#define DEFAULT_FARE 1000

class CPerson
{
public:
	CPerson() { }
	virtual ~CPerson() {
		cout << "virtual ~CPerson()" << endl;
	}

	// ��� ��� �������̽�(���� ���� �Լ�)
	virtual void CalcFare() = 0;

	virtual unsigned int GetFare() { return m_nFare; }

protected:
	unsigned int m_nFare = 0;
};

// �ʱ� Ȥ�� �ı� ������
class CBaby : public CPerson
{
public:
	~CBaby() {
		cout << "~CBaby()" << endl;
	}
	// ������(0~7��) ��� ���
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
	// ���(8~13��) ��� ���
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
	// û�ҳ�(14~19��) ��� ���
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
	// ����(20�� �̻�) ��� ���
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE;	// 100%
	}
};

// ����� �ڵ�
int main()
{
	CPerson* arList[3] = { 0 };
	int nAge = 0;

	// 1. �ڷ� �Է�: ����� �Է¿� ���� ������ ��ü ����
	for (auto &person : arList) //auto ������� ����
	{
		cout << "���̸� �Է��ϼ���: ";
		cin >> nAge;
		if (nAge < 8)
			person = new CBaby; 

		else if (nAge < 14)
			person = new CChild;

		else if (nAge < 20)
			person = new CTeen;

		else
			person = new CAdult;

		// ������ ��ü�� �´� ����� �ڵ����� ���ȴ�.
		person->CalcFare(); //�Լ��� �����Լ��� �������� ȣ��ǹǷ� ������ ��ü�� �´� CalcFare()�� ȣ��ȴ�.
	}

	// 2. �ڷ� ���: ����� ����� Ȱ���ϴ� �κ�
	for (auto person : arList)
		cout << person->GetFare() << "��" << endl;

	// 3. �ڷ� ���� �� ����
	for (auto person : arList)
		delete person;

	return 0;
}
*/

//��������ȯ
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
	// �Ļ� ���� ��ü�� �⺻ �������� �������մϴ�.
	CMyData *pData = new CMyDataEx;
	CMyDataEx *pNewData = NULL;

	// CMyData::SetData() �Լ��� ȣ���մϴ�.
	// ���� 10�� �Ѵ��� �˻����� �ʽ��ϴ�.
	pData->SetData(15);

	// �⺻ ���Ŀ� ���� �������̳� ����Ű�� ����� �Ļ� �����Դϴ�.
	// �� ����� ��Ȯ�ϹǷ� �Ļ� ���Ŀ� ���� �����ͷ� ����ȯ�� �õ��մϴ�.
	pNewData = static_cast<CMyDataEx*> (pData); //��� ���� : �θ�->�ڽ�, �ڽ�->�θ�� ����ȯ�� �� ���� ����� �� �ִ�.
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

//�������̽��� �����ֱ� ���� ������ ���� ����
using CMyData::operator+;
using CMyData::operator=;
};

int main()
{
CMyData a(3), b(4);
cout << a + b << endl;

CMyDataEx c(3), d(4), e(0);

// CMyDataEx Ŭ������ �´� �ܼ� ���� �����ڰ� ��� ������ ������ �߻��Ѵ�.
e = c + d;
cout << e << endl;

return 0;
}