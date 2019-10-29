#include <iostream>
using namespace std;

//1번
/*int IncrementPrev(int a)
{
	return ++a;
}

int IncremetPost(int a)
{
	return a++;
}

int main()
{
	int a = 10;

	cout << IncrementPrev(a) << endl;
	cout << IncremetPost(a) << endl;

	return 0;
}*/

//2번
/*void Absolute(int &ab)
{
	 ab=abs(ab);
}

void main()
{
	int a = 3;
	int b = -5;

	Absolute(a);
	Absolute(b);

	cout << a << endl;
	cout << b << endl;
}*/

//3번
/*int Sum(int a=0, int b=0, int c=0)
{
	return a + b + c;
}

void main()
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl;
}*/

//4번
/*int Sum(int a=0, int b=0, int c=0, int d=0, int e=0, int f=0)
{
	return b + c + d + e + f;
}

void main()
{
	cout << Sum(5, 1, 2, 3, 4, 5) << endl;
	cout << Sum(3, 1, 2, 3) << endl;
	cout << Sum(1, 1) << endl;
}*/

//5번
/*void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void main()
{
	const int size = 7;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
	Print(arr, size);
}*/

//6번
/*void Reverse(int arr1[], int size)
{
	int arr2[10];

	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
	}

	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[6-i];
	}
}

void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void main()
{
	const int size = 7;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
	Reverse(arr, size);
	Print(arr, size);
}*/

//7번
/*void Sort(int arr[], int size)
{
	int temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void main()
{
	const int size = 7;
	int arr[10] = { 7, 6, 5, 4, 3, 2, 1 };
	Sort(arr, size);
	Print(arr, size);
}*/