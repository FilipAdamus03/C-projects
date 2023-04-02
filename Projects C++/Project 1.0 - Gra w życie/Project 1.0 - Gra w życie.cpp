// Filip Adamus 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAXN = 100;

int board[MAXN][MAXN];
int n;

int countNeighbors(int row, int col) {
    int cnt = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < n && j >= 0 && j < n && !(i == row && j == col)) {
                cnt += board[i][j];
            }
        }
    }
    return cnt;
}

void generateInitialState() {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (rand() % 100 < 30) {
                board[i][j] = 1;
            }
        }
    }
}

void printBoard() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j]) {
                cout << "o ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void simulateLife() {
    int newBoard[MAXN][MAXN] = { 0 };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = countNeighbors(i, j);
            if (board[i][j]) {
                if (cnt == 2 || cnt == 3) {
                    newBoard[i][j] = 1;
                }
            }
            else {
                if (cnt == 3) {
                    newBoard[i][j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = newBoard[i][j];
        }
    }
}

int main() {
    cout << "Podaj rozmiar planszy: ";
    cin >> n;
    generateInitialState();
    while (true) {
        system("cls");
        cout << "Podaj rozmiar planszy: " << n << endl;
        printBoard();
        simulateLife();
        cin.ignore();
    }
    return 0;
}
