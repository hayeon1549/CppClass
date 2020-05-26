#include <iostream>
using namespace std;

//void TestFunc(int &rParam);

int main()
{
	//아스키코드 변경
	/*char a;
	cin >> a;
	cout << "입력하신 문자 " << a << "의 아스키코드 값은 " << int(a) << "입니다." << endl;
	*/

	//동적 할당
	/*int *pData = new int;
	int *pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
	*/

	//배열 동적 할당
	/*int *arr = new int[5];

	for (int i = 0; i < 5; ++i)
		arr[i] = (i + 1) * 10;
	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	delete[] arr;
	*/

	//참조자 형식
	/*int nData = 10;
	int &ref = nData;
	ref = 20;
	cout << nData << endl;

	int *pnData = &nData;
	*pnData = 30;
	cout << nData << endl;
	*/

	//참조사 형식 - 함수
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