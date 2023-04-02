#include <iostream>

using namespace std;

int main() {

	int liczba1, liczba2, suma, w;
	char znak;

	
	    do{ 
		cout << "----------------------" << endl;
		cout << "- PROSTY KALKUAKLTOR -" << endl;
		cout << "----------------------" << endl;
		cout << "" << endl;

		cout << "Podaj 1 liczbe: ";
		cin >> liczba1;

		cout << "Podaj 2 liczbe: ";
		cin >> liczba2;

		cout << "" << endl;
		cout << "Podaj znak dzialania np.(+,-,*,/,%): ";
		cin >> znak;

		switch (znak) {
		case '+':
			suma = liczba1 + liczba2;
			cout << "Twoj wynik = " << suma << endl;
			cout << "" << endl;
			break;

		case '-':
			suma = liczba1 - liczba2;
			cout << "Twoj wynik = " << suma << endl;
			cout << "" << endl;
			break;

		case '/':
			suma = liczba1 / liczba2;
			cout << "Twoj wynik = " << suma << endl;
			cout << "" << endl;
			break;

		case '*':
			suma = liczba1 * liczba2;
			cout << "Twoj wynik = " << suma << endl;
			cout << "" << endl;
			break;

		case '%':
			suma = liczba1 % liczba2;
			cout << "Twoj wynik = " << suma << endl;
			cout << "" << endl;
			break;
		default:
			cout << "Niepoprawny wybor." << endl;
			break;

		}

		cout << "Jezeli chcesz dalej obliczac wpisz 1, jezeli chcesz wyjsc wpisz 0: ";
		cin >> w;
		cout << "" << endl;

		} while (w != 0);
		
		cout << "To koniec!" << endl;


	return 0;
}

// F.A.
