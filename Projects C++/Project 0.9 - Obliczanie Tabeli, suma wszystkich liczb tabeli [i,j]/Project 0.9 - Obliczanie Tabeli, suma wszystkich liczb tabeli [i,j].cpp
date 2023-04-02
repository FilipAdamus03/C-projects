#include <iostream>

using namespace std;

constexpr int N{ 10 };

void neigh(int F[][N], int W[][N], int n, int r)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			W[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (F[i][j] == 0) continue;
			for (int k = -r; k < r; k++) {
				int ii = i + k;
				if (ii < 0 || ii >= n) continue;
				for (int l = -r; l <= r; l++) {
					int jj = j + l;
					if (jj >= 0 && jj < n) W[ii][jj] += F[i][j];
				}
			}
		}
	}
}

int main()
{
	int n, r;
	cin >> n >> r;

	int F[N][N], W[N][N];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> F[i][j];
		}
		
	}
	
	cout << endl;
		
	neigh(F, W, n, r);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << W[i][j] << " ";
		}
		cout << endl;
	}
	return EXIT_SUCCESS;
}

// F.A.
