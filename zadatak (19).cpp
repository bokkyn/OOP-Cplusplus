#include <iostream>
using namespace std;

void rect_area(float lwidth, float lheight, float larea);

int main(void)
{
	float width = 2.5, height = 3.1, area = 0.0;
	rect_area(width, height, area);
	cout << "The area in main is " << area << endl;

	return 0;
}

void rect_area(float lwidth, float lheight, float larea)
{
	larea = lwidth * lheight;
	cout << "The area in the function is " << larea << endl;
}
