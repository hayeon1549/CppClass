#include <iostream>
#include <string>
using namespace std;

//����� ����Ʈ ������
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

//this ������ 1
/*class Student
{
private:
	int age;
	string name;

public:
	void student(int age, string name)
	{
		age = age; //������� age = �Ű����� age
		name = name;
	}

	void print()
	{
		cout << "�̸�: " << name << " ����: " << age << endl;
	}
};

int main()
{
	Student stu;
	stu.student(18, "hayeon");
	stu.print();

	return 0;
}*/

//this ������ 2
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

//����� �޼���
/*class CTest
{
public:
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {};

	int GetData() const //����� �޼���� ���⸦ �� �� ����
	{
		//����� �޼���� mutable ��� �������� ���� �� �� �ִ�
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

//const_cast�� ����� ����� ���� ����
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

//��� �Լ� ���� ���� 1
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

//delete ���� ����� ������ ���� �߻�
/*class CMyData
{
public:
	CMyData() : m_nData(0) {};

	int GetData(void) { return m_nData; }
	void   SetData(double dParam) = delete;
	//setdata�� �������� �Ѿ���� ������ ���

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