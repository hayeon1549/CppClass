#include <iostream>
#include <string>
using namespace std;

//�Լ� ���ø�
/*template <class T>

T sum(T a, T b) {
	return a + b;
}

template<>
const char* sum<const char*>(const char *s1, const char *s2)
{
	const char* str = "[sonst char char *] ���ڿ��� ���� �� �����ϴ�.";
	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	return str;
}

template<>
string sum<string>(string s1, string s2)
{
	string str = "[string] ���ڿ��� ���� �� �����ϴ�.";
	cout << "string s1 : " << s1 << endl;
	cout << "string s2 : " << s2 << endl;
	return str;
}

int main()
{
	int a = 10, b = 20;
	double d1 = 1.1;
	double d2 = 2.2;
	const char *s1 = "HI";
	const char *s2 = "BYE";
	string s3 = "GOOD";
	string s4 = "NIGHT";

	cout << sum(a, b) << endl << endl;
	cout << sum(d1, d2) << endl << endl;
	cout << sum(s1, s2) << endl << endl;
	cout << sum("G", "SM") << endl << endl;
	cout << sum<const char *>(s1, s2) << endl << endl;
	cout << sum(s3, s4) << endl << endl;
}*/

//Ŭ���� ���ø�
/*// 'T'�� �ڷ����� �ȴ�.

template<typename T>
class CMyData
{
public:
	CMyData(T param) : m_Data(param) { }
	T GetData() const { return m_Data; }

	// ���Ŀ� ���� ��ȯ�� ����
	operator T () { return m_Data; }
	void SetData(T param) { m_Data = param; }

private:
	// T ������ ��� ���� ����
	T m_Data;
};

int main(void)
{
	CMyData<int> a(5);
	cout << a << endl;
	CMyData<double> b(123.45);
	cout << b << endl;

	// ���ڿ��� �����ϱ� ���� �޸𸮸� ���� �Ҵ������� �ʴ´�.
	char str1[10] = "Hello";
	CMyData<char*> c(str1);

	//CMyData<char*> c("Hello");
	cout << c << endl;

	return 0;
}*/

//�迭 ���ø�
/*template<typename T>
class CMyArray
{
public:
	// (2)
	explicit CMyArray(int nSize) : m_nSize(nSize) //explicit �ڷ����� �ٲ�� ���� ����
	{
		m_pData = new T[nSize];
	}

	~CMyArray() { delete[] m_pData; }

	// ���� ������
	CMyArray(const CMyArray &rhs)
	{
		m_pData = new T[rhs.m_nSize];
		memcpy(m_pData, rhs.m_pData, sizeof(T)* rhs.m_nSize);
		m_nSize = rhs.m_nSize;
	}

	// ���� ������
	CMyArray& operator=(const CMyArray &rhs)
	{
		if (this == &rhs)
			return *this;

		delete m_pData;
		m_pData = new T[rhs.m_nSize];
		memcpy(m_pData, rhs.m_pData, sizeof(T)* rhs.m_nSize);
		m_nSize = rhs.m_nSize;

		return *this;
	}

	// �̵� ������
	CMyArray(CMyArray &&rhs) //&& ���� ����, r-value
	{
		operator = (rhs);
	}

	// �̵� ���� ������
	CMyArray& operator=(const CMyArray &&rhs)
	{
		m_pData = rhs.m_pData;
		m_nSize = rhs.m_nSize;
		rhs.m_pData = nullptr;
		rhs.m_nSize = 0;
	}

	// �迭 ������
	T& operator[](int nIndex)
	{
		if (nIndex < 0 || nIndex >= m_nSize)
		{
			cout << "ERROR: �迭�� ��踦 ��� �����Դϴ�." << endl;
			exit(1);
		}

		return m_pData[nIndex];
	}

	// ���ȭ�� �迭 ������ 
	T& operator[](int nIndex) const
	{
		return operator[](nIndex);
	}

	// �迭 ����� ������ ��ȯ
	int GetSize() { return m_nSize; }

private:
	T *m_pData = nullptr;
	int m_nSize = 0;
};

int main()
{
	// int �ڷ��� �迭
	CMyArray<int> arr(5); // (1)

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << ' ';

	cout << endl;

	CMyArray<int> arr2(3);
	arr2 = arr; //���� ������
	for (int i = 0; i < 5; ++i)
		cout << arr2[i] << ' ';

	cout << endl;

	return 0;
}*/