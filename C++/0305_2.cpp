#include<iostream>
using namespace std;

int main()
{
	int *pData = new int;
	int *NewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *NewData << endl;

	delete pData;
	delete NewData;
}