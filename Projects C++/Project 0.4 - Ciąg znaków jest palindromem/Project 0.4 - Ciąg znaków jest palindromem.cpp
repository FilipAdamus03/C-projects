#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(const string& str) {
	int lewo = 0, prawo = str.length() - 1;
	while (lewo < prawo) {
		if (str[lewo] != str[prawo]) {
			return false;
		}

		lewo++;
		prawo--;

	}
	return true;
}

int main() {
	string str;
	cout << "Podaj ciag znakow: ";
	cin >> str;
	if (isPalindrom(str)) {
		cout << "Ciag znakow \"" << str << "\" jest palindromem." << endl;
	}
	else {
		cout << "Ciag znakow \"" << str << "\" nie jest palindromem." << endl;

	}
	return 0;
}

