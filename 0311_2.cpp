#include <iostream>
using namespace std;

//���� ����=�����ε�, �������̵�=���
/*int mi(int a, int b)
{
	return a - b;
}
double mi(double a, double b)
{
	return a - b;
}
int mi(double a, double b, double c)
{
	return a - b - c;
}
int mi(double a, double b, int c)
{
	return a - b - c;
}*/

//�Լ� ���ø�
/*template <typename T>
//��ȯ����   �Լ��̸�      �Ű�����
T Add(T a, T b) //�Լ� �̸��� ������ �� �ȴ�
{
	return a + b;
}*/

//���ӽ����̽�
/*


namespace Test2
{
	int g_nData = 20;
	void TestFunc(void)
	{
		cout << "Test2::TestFunc()" << endl;
	}
}*/

namespace Test //����, �Լ�, Ŭ���� ���� ������ҵ��� �� ���ַ� �����ֱ� ���� ����
{
	int g_nData = 10;
	void TestFunc(void)
	{
		cout << "Test::TestFunc()" << endl;
	}
}

using namespace Test; //���ӽ����̽��� ������ �Ŀ� ����Ѵ�

int main()
{
	/*cout << mi(1, 2) << endl;
	cout << mi(2.2,1.1) << endl;
	cout << mi(3.3, 2.2, 1.1) << endl;
	cout << mi(3.3, 2.2, 1) << endl;*/

	/*cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;*/

	/*Test1::TestFunc();
	cout << Test1::g_nData << endl;
	Test2::TestFunc();
	cout << Test2::g_nData << endl;*/

	cout << g_nData << endl;

	return 0;
}