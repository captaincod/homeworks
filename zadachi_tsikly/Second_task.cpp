#include <iostream>
#include <cmath>
#include <conio.h>
#define PI 3.14159265

using namespace std;

int main() {
	double t;
	t = PI;
	cout << "For y = (sin(x))**2: ";
	bool is_periodic = false;
	const double rad = 180 / PI;
	for (double x = 0.0; x < 5 * t; x += 0.1) {
		if (sin(x) * sin(x) == sin(x * rad) * sin(x * rad)) {
			is_periodic = true;
			break;
		}
	}
	if (is_periodic) {
		cout << " it's periodic. ";
		is_periodic = false;
	}
	else {
		cout << " it's not periodic. ";
	}

	cout << "For y = tan(x): ";
	for (double x = 0.0; x < 5 * t; x += 0.1) {
		if (tan(x) == tan(x * rad)) {
			is_periodic = true;
			break;
		}
	}
	if (is_periodic) {
		cout << " it's periodic. ";
		is_periodic = false;
	}
	else {
		cout << " it's not periodic. ";
	}

	t = 2 * PI;
	cout << "For y = 1/x * sin(x): ";
	for (double x = 0.0; x < 5 * t; x += 0.1) {
		if ((1 / x) * sin(x) == (1 / x * rad) * sin(x * rad)) {
			is_periodic = true;
			break;
		}
	}
	if (is_periodic) {
		cout << " it's periodic. ";
		is_periodic = false;
	}
	else {
		cout << " it's not periodic. ";
	}

	_getch();
	return 0;
}