#include <iostream>
using namespace std;

//���� ������
/*class C
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

	C& operator+=(const C &r)
	{
		*m = *r.m;

		//��ü �ڽſ� ���� ������ ��ȯ
		return *this;
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
	C b(20);

	//�ܼ� ������ �õ��ϸ� ��� ����� ���� �״�� �����Ѵ�.
	a += b;
	cout << a.GD() << endl;

	return 0;
}*/

//��ȯ ������
/*class C
{
public:
	//�Ű������� �ϳ����� �����ڴ� ����ȯ�� �����ϴ�.
	//explicit C(int n) :m(n) ����� �����Ϸ� ������� ����ȯ�ϴ� ���� ���� �� �ִ�.
	C(int n) :m(n) //��ȯ ������
	{
		cout << "C(int)" << endl;
	}

	C(const C &r) : m(r.m)
	{
		cout << "C(const C &)" << endl;
	}

	int GD() const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

//�Ű������� Ŭ���� �����̸� ��ȯ ������ �����ϴ�.
void TF(C p) //������ ���� �Ұ�
{
	cout << "TF(): " << p.GD() << endl;
}

int main()
{
	//int �ڷ������� C �������� ��ȯ�� �� �ִ�.
	TF(5); //��ü�� �Ѱ���� �ϴµ� ������ �ڷḦ �Ѱ������Ƿ� ������ ���������� ��ȯ �����ڰ� �ֱ� ������ Tf(C(5))�� ����ȴ�.

	return 0;
}*/

//���Ǵ� ��ȯ
class C
{
public:
	explicit C(int n) :m(n){}

	//C Ŭ������ int �ڷ������� ��ȯ�� �� �ִ�
	operator int(void) { return m; }

	int GD() const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

int main()
{
	C a(10);
	cout << a.GD() << endl;

	//C ���Ŀ��� int �ڷ������� ��ȯ�� �� �ִ�
	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>a << endl;

	return 0;
}