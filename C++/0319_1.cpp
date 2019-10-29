#include <iostream>
using namespace std;

/*
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
	CTest a;
	cout << "Before b" << endl;
	CTest b;
	cout << "End" << endl;

	return 0;
}
*/

/*class CTest
{
	int m_nData;

public:
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}
	CTest()
	{
		m_nData = 1;
	}
	~CTest()
	{
		cout << "~CTest::CTest() " << m_nData << endl;
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a;
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;

	return 0;
}*/

//malloc
/*int main()
{
	CTest *pTest = (CTest *)malloc(sizeof(CTest));
	cout << "PTest_begin" << endl;
	free(pTest);
	cout << "PTest_end" << endl;

	return 0;
}*/

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	~CTest()
	{
		cout << "~CTest::CTest() " << endl;
	}
};

int main()
{
	cout << "Begin" << endl;

	//CTest *pData = new CTest;
	//cout << "Test1" << endl;

	//delete pData;

	CTest *pData = new CTest[3];

	delete[] pData;

	cout << "End" << endl;

	return 0; 
}