#include <iostream>
using namespace std;

// funkcija za ispis ulaznog argumenta
void ispisi(int lr) {
    cout << lr << endl;
}

int main()
{
    int r;								// deklaracija varijable r
    
    r = 2;								// postavljanje vrijednosti r
    ispisi(r);							// poziv funkcije

	return 0;
}


