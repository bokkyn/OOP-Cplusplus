#include <iostream>
using namespace std;


int main() {
	unsigned int i;					// deklaracija brojaèa i
    unsigned int p;					// deklaracija potencije
	unsigned int b, r;				// deklaracija baze i rezultata

	cout << "Upisite bazu:";		// ispis na ekran
	cin >> b;						// uèitavanje sa tastature
	cout << "Upisite potenciju:";	// ispis na ekran
	cin >> p;						// uèitavanje sa tastature

	r = 1; // inicijaliziram vrijednost rezultata na 1
	for( i = 0 ; i < p ; i++ ) { // p puta potenciram bazu
		r = r * b;
	}
	
// ispis rezultata
	cout << b << " na " << p << " je: " << r << endl;

	return 0;
}