#include <iostream>
#include <string>

using namespace std;

class ploca // izvorna klasa
{
	public:
		string naslov;
		string izvodjac;
		int  trajanje;		// u minutama

		ploca()
		{
			naslov = "";
			izvodjac = "";
			trajanje = 45;
		}

		virtual void Ispisi( void ) = 0;
};
class LP : public ploca // stari vinil
{
	public:
		int  RPM;			// broj okretaja

		LP():ploca() { RPM = 45; }
		void Ispisi() {
			cout << "LP: naslov      - " << naslov << endl;
			cout << "LP: izvodjac    - " << izvodjac << endl;
			cout << "LP: trajanje    - " << trajanje << endl;
			cout << "LP: RPM         - " << RPM << endl << endl;
		}
};

class CD : public ploca // compact disc
{
	public:
		bool RW;			// je li RW

		CD():ploca() { RW = true; }
		void Ispisi() {
			cout << "CD: naslov      - " << naslov << endl;
			cout << "CD: izvodjac    - " << izvodjac << endl;
			cout << "CD: trajanje    - " << trajanje << endl;
			cout << "CD: RW          - " << RW << endl << endl;
		}
};

class DVD : public ploca // digital video disc
{
	public:
		bool dvostrani;	// je li dvostrani

		DVD():ploca() {	dvostrani = true; }
		void Ispisi() {
			cout << "DVD: naslov      - " << naslov << endl;
			cout << "DVD: izvodjac    - " << izvodjac << endl;
			cout << "DVD: trajanje    - " << trajanje << endl;
			cout << "DVD: dvostrani   - " << dvostrani << endl << endl;
        }
};

int main()
{
	LP* a = new LP;
	CD* b = new CD;
	DVD* c = new DVD;

	a->Ispisi();
	b->Ispisi();
	c->Ispisi();

	delete a;
	delete b;
	delete c;

    return 0; 
}
