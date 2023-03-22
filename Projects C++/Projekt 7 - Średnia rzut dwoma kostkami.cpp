#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void pmf(int n) {
    srand(time(NULL));

    const int sides = 6;
    int results[11] = { 0 };

    for (int i = 0; i < n; i++)
    {
        int roll1 = rand() % sides + 1;
        int roll2 = rand() % sides + 1;
        int sum = roll1 + roll2;

        results[sum - 2]++;
    }

    cout << "Przyblizony rozklad prawdopodobienstwa dla " << n << " rzutow dwoma kostkami:" << endl;
    for (int i = 2; i <= 12; i++)
    {
        cout << i << ": " << (double)results[i - 2] / n << endl;
    }
}

int main()
{
    pmf(1000);
    return 0;
}
