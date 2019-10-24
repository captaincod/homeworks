#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {

	double eps;
	cout << "Enter the epsilon: ";
	cin >> eps;
	bool is_proved = false;
	for (double x = 1.0; x > 0; x /= 2) {
		cout << x;
		if (fabs((sin(x) / x) - 1) < eps) {
			is_proved = true;
			break;
		}
	}
	if (is_proved) {
		cout << "We proved, that with entered epsilon the first wonderful limit works";
	}
	else {
		cout << "We can't prove it. Please, check the epsilon you have entered";
	}

	_getch();
	return 0;
}