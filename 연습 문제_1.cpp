#include <iostream>
using namespace std;

void Swap(int &a, int &b);

int main()
{
	//3��
	/*char *a = new char[12];

	for (int i=0; i<12; i++)
		a[i] = 'a';

	for (int i = 0; i < 12; i++)
		cout << a[i];

	delete[] a;*/

	//4��
	int c=10;
	int d=5;
	cout << c << ' ' << d << endl;
	Swap(c, d);
	cout << c << ' ' << d << endl;

	//6��
	/*int aList[5] = { 10,30,50,40,20 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				int t = aList[i];
				aList[i] = aList[j];
				aList[j] = t;
			}
		}
	}

	for (auto i : aList)
	{
		cout << i << ' ';
	}*/

	return 0;
}

void Swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}