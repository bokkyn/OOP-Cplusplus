#include <iostream>
#include <string>

using namespace std;

class LP // stari vinil
{
public:
	string naslov;
	string izvodjac;
	int  trajanje;		// u minutama
	int  RPM;			// broj okretaja

	LP()
	{
		naslov = "";
		izvodjac = "";
		trajanje = 45;
		RPM = 45;
	}
};

class CD // compact disc
{
public:
	string naslov;
	string izvodjac;
	int  trajanje;		// u minutama
	bool RW;			// je li RW

	CD()
	{
		naslov = "";
		izvodjac = "";
		trajanje = 45;
		RW = true;
	}
};

class DVD // digital video disc
{
public:
	string naslov;
	string izvodjac;
	int  trajanje;		// u minutama
	bool dvostrani;	// je li dvostrani

	DVD()
	{
		naslov = "";
		izvodjac = "";
		trajanje = 45;
		dvostrani = true;
	}
};

void main()
{
	LP a;
	CD b;
	DVD c;

	cout << "LP: naslov   - " << a.naslov << endl;
	cout << "LP: izvodjac - " << a.izvodjac << endl;
	cout << "LP: trajanje - " << a.trajanje << endl;
	cout << "LP: RPM      - " << a.RPM << endl << endl;

	cout << "CD: naslov   - " << b.naslov << endl;
	cout << "CD: izvodjac - " << b.izvodjac << endl;
	cout << "CD: trajanje - " << b.trajanje << endl;
	cout << "CD: RW       - " << b.RW << endl << endl;

	cout << "DVD: naslov    - " << c.naslov << endl;
	cout << "DVD: izvodjac  - " << c.izvodjac << endl;
	cout << "DVD: trajanje  - " << c.trajanje << endl;
	cout << "DVD: dvostrani - " << c.dvostrani << endl;

}