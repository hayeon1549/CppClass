#include <iostream>
using namespace std;

/*int TestFunc(int nParam = 10)
{
	return nParam;
}*/

/*int TestFunc(int nParam1, int nParam2 = 2)
{
	return nParam1 * nParam2;
}*/

/*int TestFunc(int nParam1, int nParam2=5, int nParam3 =10) //������ �Ű��������� ������ ���� ����ؾ� �Ѵ�
{
	return nParam1 + nParam2 + nParam3;
}*/

//�Լ� ��������
/*int Add(int a, int b, int c)
{
	cout << "Add(int, int, int) : ";
	return a + b + c;
}

int Add(int a, int b)
{
	cout << "Add(int, int) : ";
	return a + b;
}

double Add(double a, double b) //�̸��� ������ �Ű����� ������ �ٸ��� ���� �� �����ؾ� �Ѵ�.
{
	cout << "Add(double, double) : ";
	return a + b;
}*/

/*int Add(double a, double b)
{
	cout << "Add(double, double) : ";
	return a + b;
}*

int main()
{
	/*cout << TestFunc() << endl; //default���� ������ ������ ����
	cout << TestFunc(20) << endl;*/

	/*cout << TestFunc(10) << endl; 
	cout << TestFunc(10, 5) << endl;*/

	/*cout << TestFunc(1) << endl;
	cout << TestFunc(1, 2) << endl;
	cout << TestFunc(1,2,3) << endl;*/

	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;
	//cout << Add(3, 4) << endl;


	return 0;
}