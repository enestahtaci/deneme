#include <iostream>
using namespace std;

int main() {
	double a, b, c, delta, rootA, rootB, rootE;

	cout << "Enter the leading coefficient: ";
	cin >> a;
	cout << "Enter the x's coefficient: ";
	cin >> b;
	cout << "Enter the constant term: ";
	cin >> c;

	delta = (pow(b, 2) - (4 * a * c));

	if (delta > 0) {
		rootA = ((-b + sqrt(delta)) / (2 * a));
		rootB = ((-b - sqrt(delta))/ (2 * a));
		cout << "First root is: " << rootA << endl;
		cout << "Second root is: " << rootB;
	}

	if (delta == 0) {
		rootE = (-b / (2 * a));
		cout << "Roots are equal." << endl;
		cout << "Root is: " << rootE;
	}

	else if (delta < 0) {
		cout << "The equation has no real number roots!";

	}
	return 0;
}
