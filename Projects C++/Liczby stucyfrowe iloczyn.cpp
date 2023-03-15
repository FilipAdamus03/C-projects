// Polecenie - Proszę napisać program, który wczytuje dwie liczby całkowite (co najwyżej stucyfrowe) a następnie wylicza i drukuje ich iloczyn.
#include <iostream>

using namespace std;

int main() {

	int a, b, suma, x = 100;

	for (int i = 0; i < x; i++) {

		cout << "Podaj liczbe pierwsza: ";
		cin >> a;
		cout << "Podaj liczbe druga: ";
		cin >> b;

		if ((a <= 100) && (b <= 100)) {
			suma = a * b;
			cout << "" << endl;
			cout << "Iloczyn twoich liczb czyli " << a << " * " << b << " = " << suma << endl;
			cout << "" << endl;
		}
		else {
			cout << "" << endl;
			cout << "Podana liczba jest wieksza od 100!" << endl;
			cout << "Wpisz mniejsza liczbe!";
			cout << "" << endl;
		}
	}

	return 0;
}

/*
   Filip Adamus
*/
