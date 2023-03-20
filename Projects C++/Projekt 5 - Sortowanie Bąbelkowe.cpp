#include <iostream>

using namespace std;



void print(int t[], int n){
    for (int i = 0; i < n; i++) {
	cout << t[i] << " ";
   }
  cout << endl;
}

void sortowanie_babelkowe(int t[], int n) {
	for (int i = 0; i < n - 1; i++) {
		bool flag{};
		for (int j = 0; j < n - 1 - i; j++) {
			if (t[j] > t[j + 1]) {
				int temp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = temp;
				flag = true;

			}

		}
		if (!flag) return;
	}

}

int merge(const int t1[], int n1, const int t2[], int n2, int t3[]) {
	int l1{}, l2{}, l3{};
	while (l1 < n1 && l2 < n2) {
		if (t1[l1] < t2[l2]) {
			if (l3 == 0 || t3[l3 - 1] != t1[l1]) {
				t3[l3++] = t1[l1];
			}
			l1++;
		}else {
			if (l3 == 0 || t3[l3 - 1] != t2[l2]) {
				t3[l3++] = t2[l2];
			}
			l2++;
		}
	}
	while (l1 < n1) {
		if (l3 == 0 || t3[l3 - 1] != t1[l1]) {
			t3[l3++] = t1[l1];
		}
		l1++;
	}
	while (l2 < n2) {
		if (l3 == 0 || t3[l3 - 1] != t2[l2]) {
			t3[l3++] = t2[l2];
		}
		l2++;
	}
	return l3;
}



int main() {

	const int N{ 100 };
	int t1[N], t2[N], t3[N];
	int n1, n2;

	srand(time(NULL));
	cout << "Podaj dwie ilosci liczb do sorotwania: ";
	cin >> n1 >> n2;
	cout << "" << endl;

	for (int i = 0; i < n1; i++) {
		t1[i] = (int)(rand() % 10);
	}
	for (int i = 0; i < n2; i++) {
		t2[i] = (int)(rand() % 10);
	}

	cout << "Pierwsze wygenerowane cyfry: ";
	print(t1, n1);

	cout << "Drugie wygenerowane cyfry: ";
	print(t2, n2);
	cout << "" << endl;

	sortowanie_babelkowe(t1, n1);
	sortowanie_babelkowe(t2, n2);

	cout << "Pierwsze po sortowaniu: ";
	print(t1, n1);

	cout << "Drugie po sortowaniu:: ";
	print(t2, n2);
	cout << "" << endl;

	cout << "Polaczone cyfry bez powtorek: ";
	int n3 = merge(t1, n1, t2, n2, t3);
	print(t3, n3);

	return 0;
}