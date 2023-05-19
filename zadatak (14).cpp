#include <iostream>
using namespace std;

class krug				// definicija klase
{
	private:			// blok privatnih varijabli klase

		double radijus;	// radijus kruga
};

int main(void)
{
	krug k;				// napravi objekt imena k klase krug
	double d;	

	d = 1.3;
	k.radijus = d;		// podešavanje varijable radijus objekta k

	cout << "Radijus kruga:" << k.radijus << endl;	// ispis na ekran

	return 0;
}

