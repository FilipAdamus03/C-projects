#include <iostream>


using namespace std;

void print(double t[], int n) {
	for (int i = 0; i < n; i++) {
	cout << t[i] << " ";
	}
	cout << endl;
}

int main(){

	const int N{ 100 };
	int n;
	double t1[N], t2[N];

	srand(time(NULL));

	cout << "Podaj ilosc liczb: ";
	cin >> n;
	cout << "" << endl;

	for (int i = 0; i < n; i++) {
		t1[i] = (double)(rand() % 100);
	}

	for (int i = 0; i < n / 2; i++) {
		t2[i] = 0.5 * (t1[2 * i] + t1[2 * i + 1]);
	}

	if (n % 2 == 1) t2[n / 2] = t1[n - 1];
	
	cout << "Wygenerowane liczby: ";
	print(t1, n);
	cout << "Srednia twoich liczb po dwie: ";
	print(t2, (n + 1) / 2);

	return 0;
}