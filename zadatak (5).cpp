#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	string str;
	list<string> lst;
	list<string>::iterator iter;

// èita stringove sa tipkovnice, dok se ne upiše "kraj"
// i upisuje ih u listu
	cin >> str;
	while (str != "kraj") {
		lst.push_back(str);
		cin >> str;
	}
	cout << endl;

// ispisuje stringove iz liste pomoæu for petlje sa iteratorom
	for (iter = lst.begin(); iter != lst.end(); ++iter) {
		cout << *iter << endl;
	}

	return 0;
}
