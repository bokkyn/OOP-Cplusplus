#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int a;
	vector<int> v;
	vector<int>::iterator iter;

// čita cijele brojeve sa tipkovnice, dok se ne upiše 0 i
// upisuje ih u vektor
	cin >> a;
	while (a != 0) {
		v.push_back(a);
		cin >> a;
	}
	cout << endl;

// ispisuje brojeve iz liste pomoću for petlje sa iteratorom
	for (iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << endl;
	}

	return 0;
}
