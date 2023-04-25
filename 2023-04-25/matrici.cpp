#include <iostream>
#include <fstream>
#include <iomanip>

/**
 * Elementul maxim de sub ds.
 * Elementul minim de sub dp.
 */
using namespace std;

int main () {
    int a[100][100];
    int n, maxim, minim;

    ifstream f("date.in");

    f >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f. close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw (5) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    minim = a[1][0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
            }
        }
    }
    cout << "minimul de sub dp: " << minim << endl;

    maxim = a[1][n-1];
    for (int i = 1; i < n; i++) {
        for (int j = n-1; j >= n-i; j--) {
            if (a[i][j] > maxim) {
                maxim = a[i][j];
            }
        }
    }
    cout << "maximul de sub ds: " << maxim << endl;

}