#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;
/**
 * 1. Se consideră o matrice nepătratică (nxm) care conţine elemente de tip real.
 * Să se determine cel mai mare, respectiv cel mai mic element al său.
 * Să se afişeze aceste elemente şi indicii lor.
 */
int main() {
    int a[100][100];
    int n, m;
    int iMax, iMin, jMax, jMin;

    ifstream f("date1.in");
    f >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // initializare pozitir max/min cu primul element din matrice
    iMax = iMin = jMax = jMin = 0;

    // parcurgere matrice
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < a[iMin][jMin]) {
                iMin = i;
                jMin = j;
            }
            if (a[i][j] > a[iMax][jMax]) {
                iMax = i;
                jMax = j;
            }
        }
    }

    cout << "Maximul: a[" << iMax << "][" << jMax << "] = " << a[iMax][jMax] << endl;
    cout << "Minimul: a[" << iMin << "][" << jMin << "] = " << a[iMin][jMin] << endl;

    return 0;
}