#include <iostream>
using namespace std;

//void TestFunc(int &rParam);

int main()
{
	//�ƽ�Ű�ڵ� ����
	/*char a;
	cin >> a;
	cout << "�Է��Ͻ� ���� " << a << "�� �ƽ�Ű�ڵ� ���� " << int(a) << "�Դϴ�." << endl;
	*/

	//���� �Ҵ�
	/*int *pData = new int;
	int *pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
	*/

	//�迭 ���� �Ҵ�
	/*int *arr = new int[5];

	for (int i = 0; i < 5; ++i)
		arr[i] = (i + 1) * 10;
	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	delete[] arr;
	*/

	//������ ����
	/*int nData = 10;
	int &ref = nData;
	ref = 20;
	cout << nData << endl;

	int *pnData = &nData;
	*pnData = 30;
	cout << nData << endl;
	*/

	//������ ���� - �Լ�
	/*int nData = 0;
	TestFunc(nData);
	cout << nData << endl;
	*/

	int aList[5] = { 10,20,30,40,50 };

	for (auto n : aList)
		cout << n << ' ';
	cout << endl;

	for (auto &n : aList)
		cout << n << ' ';
	cout << endl;

	return 0;
}

/*
void TestFunc(int &rParam)
{
	rParam = 100;
}
*/