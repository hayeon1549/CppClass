#include <iostream>
using namespace std;

//������ �Լ�

/*
//������ �ڵ�
class CTest
{
public:

	//CTest Ŭ������ '������ �Լ�' ���� �� ����
	CTest() //������ �Լ��� �̸��� Ŭ���� �̸��� �����ؾ���
		:m_nData(10), test(20) //�ʱ�ȭ ���
	{
		//m_nData = 10;
	}

	//��� ������ ����
	int m_nData = 10; //C++11���� ���� ��
	int test;

	//��� �Լ� ���� �� ����
	void PrintData(void);
};

void CTest::PrintData(void)
{
	//��� �����Ϳ� �����ϰ� ���� ���
	//int m_nData = 20; //���������� �켱������ �� ����
	cout << m_nData << endl;
}

//����� �ڵ�
int main()
{
	CTest t; //���� �� ������ �Լ� ȣ��
	t.PrintData();

	return 0;
}
*/

/*\class CMyData
{
	//�⺻ ���� ���� �����ڴ� private�̴�
	int m_nData;
public:
	int GetData(void) { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

int main()
{
	CMyData data;
	//data.m_nData = 10;
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}*/

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a; //���������� ��� ���� ���� ȣ��ǰ� ���α׷��� ���� ��(�����Լ��� ���� ��) �Ҹ�
	cout << "End" << endl;

	return 0;
} //a�� ���������̱� ������ ��ü�� �����Լ��� ���� �� �Ҹ�