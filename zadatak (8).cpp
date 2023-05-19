#include <iostream>
#include <string>

using namespace std;

class ploca						// izvorna klasa
{
public:
	string naslov;
	string izvodjac;
	int  trajanje;

	ploca()
	{
		naslov = "";
		izvodjac = "";
		trajanje = 45;
	}
};


class LP : public ploca			// LP nasljeðuje od klase ploca
{
public:
	int  RPM;

	LP() :ploca() { RPM = 45; }
};

class CD : public ploca			// CD nasljeðuje od klase ploca
{
public:
	bool RW;

	CD() :ploca() { RW = true; }
};

class DVD : public ploca		// DVD nasljeðuje od klase ploca
{
public:
	bool dvostrani;

	DVD() :ploca() { dvostrani = true; }
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