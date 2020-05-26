#include <iostream>
using namespace std;

class C
{
public:
	C(int n, const char *pN) :mn(n), mp(pN)
	{
		cout << "C(int): " << mp << endl;
	}

	~C()
	{
		cout << "~C(): " << mp << endl;
	}

	C(const C &r) :mn(r.mn), mp(r.mp)
	{
		cout << "C(const C &): " << mp << endl;
	}

	C& operator=(const C &r) 
	{
		cout << "operator=" << endl;

		mn = r.mn;

		return *this;
	}

	int GD() const { return mn; }
	void SD(int n) { mn = n; }

private:
	int mn = 0;

	const char *mp = nullptr;
};

C TF(int n)
{
	C a(n, "a");
	
	return a;
}

int main()
{
	C b(5, "b");
	cout << "**Before**" << endl;

	b = TF(10);
	cout << "**After**" << endl;
	cout << b.GD() << endl;

	return 0;
}