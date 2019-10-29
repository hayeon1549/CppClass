#include <iostream>
using namespace std;

//���������
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
	//����Ʈ �����ڰ� ȣ��Ǵ� ���
	CMyData a;
	a.SetData(10);

	//���� �����ڰ� ȣ��Ǵ� ���
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}*/

//�Լ� ȣ��� ���� ������
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

	//��������� ����
	//CTestData(const CTestData &rhs) = delete;

	//�б� ���� ����� �޼���
	int GetData() const { return m_nData; }
	//��� ������ ���⸦ �õ��ϴ� �޼���
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

//��ȣ���� �Լ����� �Ű����� �ν��Ͻ��� ���� ����
void TestFunc(CTestData param) //��ü�� 2���� �����ǹǷ� ������ ����(&)�� ����ϸ� ��ü�� 1���� ������ �� �ִ�
{
	cout<<"TestFunc()"<<endl;
	//��ȣ���� �Լ����� �Ű����� �ν��Ͻ��� ���� ����
	param.SetData(20); //���� �����ڰ� ȣ��ȴ�
}

int main()
{
	cout << "***Begin***" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a : " << a.GetData() << endl;

	cout << "***End***" << endl;
}