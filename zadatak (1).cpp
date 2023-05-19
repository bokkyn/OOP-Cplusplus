#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

class kompleks
{
private:
	double real;
	double imag;

public:

	kompleks();
	kompleks(double r, double i);

	double getReal() { return real; };
	double getImag() { return imag; };

	void setReal(double r) { real = r; };
	void setImag(double i) { imag = i; };

};
kompleks::kompleks()
{
	real = 0.0;
	imag = 0.0;
}

kompleks::kompleks(double r, double i)
{
	real = r;
	imag = i;
}

bool operator < (kompleks &c1, kompleks &c2)
{
	if ((pow(c1.getReal(), 2) + pow(c1.getImag(), 2) < (pow(c2.getReal(), 2) + pow(c2.getImag(), 2))))
		return true;
	else
		return false;
}

istream& operator >> (istream &s, kompleks &c1) {
	double rtemp, itemp;

	if (s >> rtemp >> itemp)
	{
		c1.setReal(rtemp);
		c1.setImag(itemp);
	}
	return s;

}

ostream& operator << (ostream &s, kompleks &c1) {
	s << setprecision(13) << c1.getReal() << " " << c1.getImag();

	return s;
}

int main() {
	kompleks A[1000];
	int i;

	for (i = 0; i < 1000; i++) {
		A[i].setReal(sqrt(float(i)));
		A[i].setImag(sqrt(float(i)));
	}

	ofstream fTxt("kompleks.txt");
	for (i = 0; i < 1000; i++) {
		fTxt << A[i] << endl;
	}
	fTxt.close();

	ofstream fBin("kompleks.bin", ios::binary);
	fBin.write((char*)A, 1000*sizeof(kompleks));
	fBin.close();

	return 0;
}
