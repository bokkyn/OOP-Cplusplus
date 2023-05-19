#include <iostream>
using namespace std;

class Krug {

private:
	double radijus;		// radijus je privatna varijabla
					// jer nesmije poprimiti negativnu vrijednost

public:
	Krug();
	bool postaviRadijus(double r);	// pristupnik za radijus

	double izracunajPovrsinu();		// funkcija za površinu
	double izracunajOpseg();		// funkcija za opseg
};

Krug::Krug() {
	radijus=0.0;
}

// u pristupniku radijusa se vrši kontrola
// vrijednosti na koju se radijus postavlja
bool Krug::postaviRadijus(double r) {
	if ( r >= 0.0 ) {
		radijus = r;
		return true;
	} else {
		return false;
	}
}


double Krug::izracunajOpseg() {
	return radijus*6.28;
}

double Krug::izracunajPovrsinu() {
	return radijus*radijus*3.14;
}

int main() {
	Krug k;			// deklaracija objekta

	k.postaviRadijus(1.0);	// postavljanje radijusa pomoæu pristupnika

	cout << "Povrsina: " << k.izracunajPovrsinu() << endl;
	cout << "Opseg: " << k.izracunajOpseg() << endl;

	cout << "Prije kraja programa!" << endl;

	return 0;
}
