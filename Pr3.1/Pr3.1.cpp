//Лаболаторну роботу виконав Коцур Назар

#include <iostream>
#include <cmath>
 
using namespace std;

int main() {
	double x;
	double y;
	double a;
	double b;

	cout << "x ="; cin >> x;
	a = 2 + (1.0 / abs(1 + x));
	
	//Спосіб 1 (Cкорочена форма розгалуження)

	if (x < 1) {
		b = (sqrt (abs (cos (x) + 13)));
	}
	if (x <= 1 && x >= -1) {
		b = 3 + tan(4.0 + x / sqrt(2));
	}
	if (x > 1) {
		b = 8 + 0.7 * x;
	}

	y = a - b;
	cout << endl;
	cout << "1) y =" << y << endl;

	//Cпосіб 2 (Повна форма розгалуження 
	if (x < 1) {
		b = (sqrt (abs (cos(x) + 13)));
	}
	else if (x > 1) {
		b = 8 + 0.7 * x;
	}
	else {
		b = 3 + tan(4.0 + x / sqrt(2));
	}

	y = a - b;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;



}