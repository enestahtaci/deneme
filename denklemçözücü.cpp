#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double serhan;
	double caglan;
	double enes;
	double ege;

	cout << "baskatsayiyi giriniz: ";
	cin >> a;
	cout << "x'in katsayisini giriniz: ";
	cin >> b;
	cout << "sabit terimi giriniz; ";
	cin >> c;



	serhan = (pow(b, 2) - (4 * a * c));

	if (serhan > 0) {
		caglan = (-b - sqrt(serhan)) / (2 * a);
		enes = (-b + sqrt(serhan)) / (2 * a);
		cout << "Ilk kok: " << caglan << endl;
		cout << "Ikinci kok: " << enes;
	}

	if (serhan == 0) {
		ege = -b / 2 * a;
		cout << "Kokler esittir!" << endl;
		cout << "Kok: " << ege;
	}

	else if (serhan < 0){
		cout << "Denkleminizin kokleri reel sayi degildir!";
	}

	return 0;
}
