#include <iostream>
using namespace std;

// funkcija koja vraæa rezultat kao vlastitu vrijednost
double povrsinaVrijednost(double lr) {
	return lr*lr*3.14;
}

// funkcija koja vraæa rezultat putem pokazivaèa
void povrsinaPokazivac(double lr, double *pok) {
    *pok = lr*lr*3.14;
}

int main() {
    double r;							// deklaracija varijable r
    double p;							// deklaracija varijable p
    
    cout << "Upisite radijus kruga:";	// ispis
    cin >> r;							// uèitavanje sa tastature

// poziv funkcija i ujedno ispis na ekran
    cout << "Povrsina kruga =" << povrsinaVrijednost(r) <<  " m2" << endl;

// poziv funkcije
	povrsinaPokazivac(r, &p);
// ispis na ekran
    cout << "Povrsina kruga =" << p <<  " m2" << endl;

	return 0;
}
