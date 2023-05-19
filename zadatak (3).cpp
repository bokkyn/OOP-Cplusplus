#include <iostream>
// predložak tvector - otvoriti za detalje
#include "tvector.h"

using namespace std;

int main()
{
// deklaracija objekta vec kao spremnika tipa tvector
    tvector<double> vec;
    double val;

	cout << "Unos proizvoljnog niza brojeva u vektor." << endl;
	cout << "Unos zavrsava kada se otkuca neko slovo!" << endl;
// punjenje vektora
    while (cin >> val)
	{
		vec.push_back(val);
	}

// nakon završenog unosa raèunamo sumu i srednju vrijednost
    double sum = 0;
	for (int i=0; i<vec.size(); i++) {
// pojedinom èlanu vektora pristupamo slièno kao i èlanu nizaa
        sum += vec[i];
	}
    double avg =sum /vec.size();

    cout <<"Suma od "<<vec.size()
         <<" elemenata: "<< sum
        <<". Srednja vrijednost: "<< avg << endl;

	return 0;
}
