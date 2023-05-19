#include <iostream>
using namespace std;

class krug				// definicija klase
{
	public:				

		double radijus;	// radijus kruga

		double Povrsina();
};

double krug::Povrsina() {
	return 3.14 * radijus * radijus;
}

int main(void) {
	krug k1;				// napravi objekt imena k1 klase krug
	krug k2;				// napravi objekt imena k2 klase krug
	double d;	

	cout << "Upisite radijus prvog kruga:" << endl;
	cin >> d;
	k1.radijus = d;			// podešavanje varijable radijus objekta k1

	cout << "Upisite radijus drugog kruga:" << endl;
	cin >> d;
	k2.radijus = d;			// podešavanje varijable radijus objekta k2

	cout << "Povrsina prvog kruga: " << k1.Povrsina() << endl;	// ispis na ekran
	cout << "Povrsina drugog kruga: " << k2.Povrsina() << endl;	// ispis na ekran

	return 0;
}

