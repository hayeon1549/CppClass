#include <iostream>
#include <string>
using namespace std;

//friend 함수
/*class CMyData
{
public:
	CMyData(int nParam) : m_nData(nParam) { }
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

	friend void PrintData(const CMyData &);

private:
	int m_nData = 0;
};

void PrintData(const CMyData &rData)
{
	cout << "PrintData(): " << rData.m_nData << endl;
}

int main()
{
	CMyData a(5);
	PrintData(a);

	return 0;
}*/

//friend 클래스
/*class DaeGi {
private:
	string name;

	friend class MeoGi;
};

class MeoGi {
public:
	void set_name(DaeGi& f, string s) {
		f.name = s;
	}
	void show_name(DaeGi& f) {
		cout << f.name << "\n";
	}
};

int main(void) {
	DaeGi f1;
	MeoGi f2;

	f2.set_name(f1, "머기");
	f2.show_name(f1);

	return 0;
}*/

//실무 코드
/*#include <iostream>
using namespace std;

class Time {
protected:
	int hour, min, sec;
public:
	void settime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
		return;
	}
	void outtime();
	Time operator +(int);
	friend Time operator+(int i, Time N);
};
Time Time::operator +(int i)
{
	// Time형의 객체와 정수를 더한다.
	sec += i;
	while (sec > 60) {
		min++;
		sec -= 60;
	}
	while (min > 60) {
		hour++;
		min -= 60;
	}
	hour %= 12;
	return (*this);
}
void Time::outtime(void)
{
	cout << endl << "time is " << hour << " hour " << min
		<< "minute " << sec << " second." << endl;
}
Time operator+(int i, Time N)
{
	return N + i;
}
void main()
{
	Time a;
	a.settime(2, 12, 23);
	a.outtime();

	a = a + 88;
	a.outtime();

	a = 88 + a;
	a.outtime();
}*/