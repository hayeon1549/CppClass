#include <iostream>
using namespace std;

template <typename D>
D Dv(D a, D b) {
	return a / b;
}

int main() {
	cout << Dv(10, 5) << endl;
	return 0;
}