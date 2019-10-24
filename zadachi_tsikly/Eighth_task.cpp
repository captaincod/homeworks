#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {

	double eps;
	cout << "Enter the epsilon: ";
	cin >> eps;
	if (eps > 0) {

		int n = 1;
		double e = exp(1.0);
		while (true) {
			double formula = (1 + 1.0 / n);
			double formula_multyplier = (1 + 1.0 / n);
			for (int i = 1; i < n; i++) {
				formula *= formula_multyplier;
			}
			if ((fabs(formula - e) < eps)) {
				break;
			}
			n++;
		}
		cout << "We proved, that with entered epsilon the second wonderful limit works with n = " << n;

	}
	else {
		cout << "Please, check your input data";
	}

	_getch();
	return 0;
}