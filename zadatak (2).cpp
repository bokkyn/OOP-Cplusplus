#include <iostream>
// biblioteka sa klasom tstring - otvoriti za detalje
#include "tstring.h" 

using namespace std;

int main(void)
{
// deklaracija stringova u C stilu
	char ime[50] = "Ivan";
	char prezime[50] = "Peras";
	char imeIPrezime[100] = "";
	char kopija[100] = "";
	
// deklaracija stringova u C++ stilu
	TString TSIme = "Ivan";
	TString TSPrezime = "Peras";
	TString TSImeIPrezime = "";
	TString TSKopija = "";

	cout << "Kopiranje:" << endl;
// kopiranje u C stilu
	strcpy( imeIPrezime, ime );
	cout << "C:   " << imeIPrezime << endl;

// kopiranje u C++ stilu
	TSImeIPrezime = TSIme;
	cout << "C++: " << TSImeIPrezime << endl << endl;
	
	cout << "Spajanje:" << endl;
// spajanje u C stilu
	strcat(imeIPrezime, " ");
	strcat(imeIPrezime, prezime);
	cout << "C:   " << imeIPrezime << endl;

// spajanje u C++ stilu
	TSImeIPrezime = TSImeIPrezime + " " + TSPrezime;
	cout << "C++: " << TSImeIPrezime << endl << endl;

	cout << "Mjerenje duljine:" << endl;
// mjerenje duljine u C stilu
	cout << "C:   " << strlen(imeIPrezime) << endl;

// mjerenje duljine u C++ stilu
	cout << "C++: " << TSImeIPrezime.length() << endl << endl;

	cout << "Usporedba:" << endl;
// usporedba u C stilu
	cout << "C:   " << !strcmp(imeIPrezime, ime) << endl;

// usporedba u C++ stilu
	cout << "C++: " << ( TSImeIPrezime == TSIme ) << endl << endl;

	return 0; 
}
