#include <iostream>
using namespace std;

template <class T>  T maximum(T a, T b) {
	if( a > b ) {
		return a;
	} else {
		return b;
	}
}

int main() {
	int a=3, b=5;
	double c=3.1, d=5.2;

	cout << maximum( a, b ) << endl;
	cout << maximum( c, d ) << endl;

	return 0;
}
