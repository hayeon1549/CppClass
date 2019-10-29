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
		cout << "이름 : " << name << endl;
		cout << "신장(m) : " << t << endl;
		cout << "무게(T) : " << h << endl;
		cout << "마력 : " << f << endl << endl;
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

	R.SetData("태권브이", 18, 80, 3000);
	R.Print();
	R.SetData("마징가", 17, 70, 2500);
	R.Print();
	R.SetData("메칸더브이", 20, 90, 3500);
	R.Print();
	R.SetData("그랜다이져", 22, 100, 5000);
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
	static int s_Value; //정적 멤버 변수 선언
};

int cTest::s_Value = 1; //정적 멤버 변수의 선언과 정의를 분리

int main()
{
	cTest a; //a라는 인스턴스를 생성
	cout << a.SetData() << endl; //정적 멤버에 접근

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
		cout << "너비 : " << getWidth() << "  높이 : " << getHeight() << endl;
	}
};

int main()
{
	Oval a(1, 1);
	a.set(10, 10);
	a.show();

	return 0;
}