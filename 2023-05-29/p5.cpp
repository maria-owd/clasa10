#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * 5. Se dă o matrice pătratică A.
 * Să se înlocuiască elementele sale situate pe diagonala principală
 * şi pe diagonala secundară cu valoarea 0 (zero).
 */
int main() {
    int a[100][100];
    int n;

    ifstream f("date5.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // trecere prin diagonale
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // diagonala principala
                a[i][j] = 0;
            } else if (i + j == n - 1) {
                // diagonala secundara
                a[i][j] = 0;
            }
        }
    }

    cout << "dupa inlocuirea elementeleor de pe diagonale cu zero, matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
