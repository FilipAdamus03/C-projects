#include <iostream>

using namespace std;

void bernoulli(bool* v, int n, double probability) {

	double threshold = RAND_MAX * probability + probability;
	for (int i = 0; i < n; i++) {
		v[i] = rand() < threshold;
	}
}

int main() {

	int n;
	double probability;

	cin >> n >> probability;
	bool* v = new bool[n];

	srand(time(NULL));
	bernoulli(v, n, probability);

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	delete[] v;

	return 0;
}
