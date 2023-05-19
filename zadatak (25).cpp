#include <iostream>
using namespace std;

class Krug {

	private:

	double radijus;

	public:

	Krug();
	bool postaviRadijus(double tempR);

	double izracunajPovrsinu();
	double izracunajOpseg();

};

bool Krug::postaviRadijus(double tempR) {
	if ( tempR >= 0.0 ) {
		radijus = tempR;
		return true;
	} else 
		return false;
}

Krug::Krug() {
	radijus = 0.0;
}

double Krug::izracunajOpseg() {
	return radijus*6.28;
}

double Krug::izracunajPovrsinu() {
	return radijus*radijus*3.14;
}

void main() {

	Krug k;
	double rad;


	cout << "Upisite radijus:";
	cin >> rad;
	if( k.postaviRadijus(rad) ) {
		cout << "Povrsina: " << k.izracunajPovrsinu() << endl;
		cout << "Opseg: " << k.izracunajOpseg() << endl;
	} else
		cout << "Greska: unjeli ste negativan radijus!" << endl;

}
