#include <iostream>
using namespace std;

// funkcija kvadrat raèuna i vraæa kvadrat vrijednosti
// argumenta funX
double kvadrat(double funX) {
	double funX2;

	funX2 = funX * funX;

	return funX2;
}

int main()
{
	// deklaracija lokalnih varijabli
	double x;
	double x2;
	double x4;

	// postavljanje vrijednosti varijable x
	x = 5.5;

	// postavlja vrijednost x2 na kvadrat x 
	// prvi poziv funkcije za raèunanje kvadrata
	x2 = kvadrat(x);

	// postavlja vrijednost x4 na kvadrat x2
	// drugi poziv funkcije za raèunanje kvadrata
	x4 = kvadrat(x2);

	return 0;
}
