#include <iostream>
#include <string>
using namespace std;

/*class cRobot
{
	string name;
	int t, h, f;

public:
	void Print(void)
	{
		cout << "�̸� : " << name << endl;
		cout << "����(m) : " << t << endl;
		cout << "����(T) : " << h << endl;
		cout << "���� : " << f << endl << endl;
	}

	void SetData(string a, int b, int c, int d) 
	{ 
		this->name = a;
		this->t = b;
		this->h = c;
		this->f = d;
	}
};

int main()
{
	cRobot R;

	R.SetData("�±Ǻ���", 18, 80, 3000);
	R.Print();
	R.SetData("��¡��", 17, 70, 2500);
	R.Print();
	R.SetData("��ĭ������", 20, 90, 3500);
	R.Print();
	R.SetData("�׷�������", 22, 100, 5000);
	R.Print();

	return 0;
}*/

/*class cTest
{
public:
	static int SetData()
	{
		return s_Value;
	}
private:
	static int s_Value; //���� ��� ���� ����
};

int cTest::s_Value = 1; //���� ��� ������ ����� ���Ǹ� �и�

int main()
{
	cTest a; //a��� �ν��Ͻ��� ����
	cout << a.SetData() << endl; //���� ����� ����

	return 0;
}*/

class Oval
{
	int width, height;

public:
	Oval(int a, int b)
	{
		width = a;
		height = b;
	};

	int getWidth()
	{
		return width;
	}
	int getHeight()
	{
		return height;
	}
	void set(int i, int h)
	{
		width = i;
		height = h;
	}
	void show()
	{
		cout << "�ʺ� : " << getWidth() << "  ���� : " << getHeight() << endl;
	}
};

int main()
{
	Oval a(1, 1);
	a.set(10, 10);
	a.show();

	return 0;
}