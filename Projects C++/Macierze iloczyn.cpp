// Iloczyn macierzy Filip Adamus
#include <iostream>

using namespace std;

int main() {

	int macierz1[100][100], macierz2[100][100], suma[100][100];
	int a, b, c;

	cout << "Wpisz liczbe wierszy: ";
	cin >> a;
	cout << "Wpisz liczbe kolumn: ";
	cin >> b;

	cout << "" << endl;

	cout << "Wprowadz macierz pierwsza" << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> macierz1[i][j];
		}
	}

	cout << "" << endl;
	
	cout << "Wprowadz macierz druga" << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> macierz2[i][j];
		}
	}

	cout << "" << endl;

	cout << "Iloczyn macierzy" << endl;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			suma[i][j] = 0;
			for (int k = 0; k < b; k++) {
				suma[i][j] += macierz1[i][k] * macierz2[k][j];
			}
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << suma[i][j] << " ";
		}
		cout << "" << endl;
	}


	return 0;
}