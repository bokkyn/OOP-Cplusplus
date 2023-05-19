#include <iostream>
using namespace std;

int x = 0;

void fun(void) {
	int y = 0;
	static int z = 0;

	x++;
	y++;
	z++;

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "z=" << z << endl;
}

int main() {
	fun();

	x++;
	y++;
	z++;

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "z=" << z << endl;

	fun();

	return 0;
}
