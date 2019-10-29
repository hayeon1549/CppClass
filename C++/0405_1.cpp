#include <iostream>
using namespace std;

//r-value 참조(&&)
/*void TF(int &&rp) 
//r-value란 연산에 따라 생성된 임시 객체
{
	cout << "TF(int &&)" << endl;
}

int main()
{
	//int && data = 3 + 4;
	//cout << data << endl;
	//data++;
	//cout << data << endl;
	TF(3+ 4);

	return 0;
}*/

class C
{
public:
	C() { cout << "C()" << endl; }
	~C() { cout << "~C()" << endl; }

	C(const C &r) : m(r.m)
	{
		cout << "C(const C &)" << endl;
	}

	C(C &&r) :m(r.m)
	{
		cout << "C(C &&)" << endl;
	}
	C& operator=(const C &) = default;

	int GD() const { return m; }
	void SD(int n) { m = n; }

private:
	int m = 0;
};

C TF(int n)
{
	cout << "TF(): Begin" << endl;
	C a;
	a.SD(n);
	cout << "TF(): End" << endl;

	return a;
}

int main()
{
	C b;
	cout << "Before" << endl;
	b = TF(20);
	cout << "Affter" << endl;
	C c(b);

	return 0;
}
