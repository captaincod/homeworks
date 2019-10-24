#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double a;
	cout << "Enter the end of the interval, integer a:";
	cin >> a;
	bool is_even_x4 = false;
	bool is_odd_x4 = false;
	bool is_even_tan = false;
	bool is_odd_tan = false;
	bool is_even_ex = false;
	bool is_odd_ex = false;

	if (a > 0) {
		cout << "For y = x**4: ";
		for (double x = 0.0; x < a; x += 0.1) {
			if (x * x * x * x == (-x) * (-x) * (-x) * (-x)) {
				is_even_x4 = true;
			}
			else if ((-x) * (-x) * (-x) * (-x) == -(x * x * x * x)) {
				is_odd_x4 = true;
			}
		}
		if (is_odd_x4 == true) {
			cout << " function is odd." << endl;
		}
		else if (is_even_x4 == true) {
			cout << " function is even." << endl;
		}
		else {
			cout << "it's neither even nor odd function." << endl;
		}

		cout << "For y = tg(x): ";
		for (double x = 0.0; x < a; x += 0.1) {
			if (tan(x) == tan(-x)) {
				is_even_tan = true;

			}
			else if (tan(-x) == -(tan(x))) {
				is_odd_tan = true;

			}
		}
		if (is_odd_tan == true) {
			cout << " function is odd." << endl;
		}
		else if (is_even_tan == true) {
			cout << " function is even." << endl;
		}
		else {
			cout << " it's neither even nor odd function." << endl;
		}

		cout << "For y = e**x: ";

		double e = exp(1.0);
		for (double x = 0.0; x < a; x += 0.1) {
			double e_multyplier = exp(1.0);
			for (int i = 1; i < x; i++) {
				e *= e_multyplier;
			}
			if (e == 1/e) {
				is_even_ex = true;
			}
			else if (1/e == -e) {
				is_odd_ex = true;
			}
		}
		if (is_odd_ex == true) {
			cout << " function is odd." << endl;
		}
		else if (is_even_ex == true) {
			cout << " function is even." << endl;
		}
		else {
			cout << "it's neither even nor odd function." << endl;
		}
	}
	else {
		cout << "'a' have to be POSITIVE INTEGER";
	}
	
	_getch();
	return 0;
}