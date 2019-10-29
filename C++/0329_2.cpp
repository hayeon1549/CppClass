#include <iostream>
using namespace std;

//���� ������ ������
/*int main()
{
	int *pa, *pb;

	pa = new int;
	*pa = 10;
	pb = new int;
	//pb = pa;
	*pb = *pa;

	cout << *pa << endl;
	cout << *pb << endl;

	delete pa;
	delete pb;

	return 0;
}*/

//�����Ͱ� ���� ���� ������ �̿�
/*class C
{
public:
	C() { cout << "C()" << endl; }

	int GD(void)const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

int main()
{
	C a;
	a.SD(10);

	C b(a);
	cout << b.GD() << endl;

	return 0;
}*/

//�����Ͱ� ������ �� ���� ����
class C
{
public:
	C(int n)
	{
		m = new int;
		*m = n;
	}
	
	//���� ������ ���� �� ����
	C(const C &r)
	{
		cout << "C(const C &)" << endl;

		//�޸𸮸� �Ҵ�
		m = new int;
		//�����Ͱ� ����Ű�� ��ġ�� ���� ����
		*m = *r.m;
	}

	//��ü�� �Ҹ��ϸ� ���� �Ҵ��� �޸𸮸� ����
	~C()
	{
		delete m;
	}

	int GD()
	{
		if (m != NULL)
			return *m;

		return 0;
	}

private:
	//������ ��� ������
	int *m = nullptr;
};

int main()
{
	C a(10);
	C b(a);
	cout << a.GD() << endl;
	cout << b.GD() << endl;
}