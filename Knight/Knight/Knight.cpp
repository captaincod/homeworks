#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	int x0, y0, z0;
	cout << "Enter the position of the knight:";
	cin >> x0 >> y0 >> z0;

	if ((x0 > 0) && (y0 > 0) && (z0 > 0)) {
		int X[24] = { 2,1,-1,-2,-2,-1, 1, 2,2,0,-2, 0, 2, 0,-2, 0,1,0,-1, 0, 1, 0,-1, 0 };
		int Y[24] = { 1,2, 2, 1,-1,-2,-2,-1,0,2, 0,-2, 0, 2, 0,-2,0,1, 0,-1, 0, 1, 0,-1 };
		int Z[24] = { 0,0, 0, 0, 0, 0, 0, 0,1,1, 1, 1,-1,-1,-1,-1,2,2, 2, 2,-2,-2,-2,-2 };

		cout << "Knight can be moved from (" << x0 << "," << y0 << "," << z0 << ") to: ";

		if ((x0 > 8) || (y0 > 8) || (z0 > 8)) {
			cout << "NOTHING, because it's out of range!";
		}
		else {
			for (int i = 0; i < 24; i++) {

				// Position of knight after move 
				int x = x0 + X[i];
				int y = y0 + Y[i];
				int z = z0 + Z[i];
				if ((x > 0 && x < 9) && (y > 0 && y < 9) && (z > 0 && z < 9)) {
					cout << "(" << x << "," << y << "," << z << ") ";
				}
			}
		}
	}
	else {
		cout << "Coordinats have to be POSITIVE INTEGERS ^>_<^";
	}
	

	_getch();
	return 0;
}