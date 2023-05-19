#include <iostream>
using namespace std;

class krug								// definicija klase
{
	private:

		double radijus;					// radijus kruga

	public:				
		krug();							// konstruktor

		double Povrsina();				// funkcija za izraèun površine

		double GetRadijus();			// pristupnici za radijus
		void SetRadijus( double tempR );
};

krug::krug() {
	radijus = 0.0;
}

double krug::Povrsina() {
	return 3.14 * radijus * radijus;
}

double krug::GetRadijus() {
	return radijus;
}

void krug::SetRadijus( double tempR ) {
	if( tempR >= 0.0 ) {
		radijus = tempR;
	} else {
		cout << "Greska! Radijus ne moze biti negativna vrijednost!" << endl;
	}
}

int main(void) {
	krug k1;				// napravi objekt imena k1 klase krug
	double d;	

	cout << "Upisite radijus kruga:" << endl;
	cin >> d;
	k1.SetRadijus( d );			// podešavanje varijable radijus objekta k1

	cout << "Radijus kruga je:     " << k1.GetRadijus() << endl;	// ispis na ekran
	cout << "Povrsina prvog kruga: " << k1.Povrsina() << endl;	// ispis na ekran

	return 0;
}

