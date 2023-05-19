#include <iostream>

using namespace std;

class Tocka2D {
public:
	Tocka2D();
//	~Tocka2D();
	void SetX(double x);
	void SetY(double y);
	double GetX();
	double GetY();
protected:
	double m_x, m_y;
};

Tocka2D::Tocka2D() {
	m_x = 0.0;
	m_y = 0.0;
}
void Tocka2D::SetX(double x) {
	m_x = x;
}
void Tocka2D::SetY(double y) {
	m_y = y;
}
double Tocka2D::GetX() {
	return m_x;
}
double Tocka2D::GetY() {
	return m_y;
}

int main() {
	Tocka2D T;

	cout << T.GetX() << " " << T.GetY() << endl;

	return 0;
}
