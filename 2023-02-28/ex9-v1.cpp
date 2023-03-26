#include <iostream>
#include <iomanip>
#include <fstream>

/**
 *  Se citeste o matrice cu n linii si m coloane, (n,m<=100) cu elemente numere naturale din intervalul
 *  [0,1000]. 
 *   Afisati liniile cu numar maxim de de elemente disticte.
 */

using namespace std;
int main() {

    int a[100][100];
    int m = 5, n = 6;
    int v[100], nr, maxim;
    bool distinct;

    ifstream f("date9.in");
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    maxim = 0;
    for (int i = 0; i < m; i++) {
        nr = 0;
        for (int j = 0; j < n; j++) {
            distinct = true;
            for (int k = 0; k < n; k++) {
                if (k != j && a[i][j] == a[i][k]) {
                    distinct = false;
                }
            }
            if (distinct) {
                nr++;
            }
        }
        v[i] = nr;

        if (v[i] > maxim) {
            maxim = v[i];
        }
        
    }

    for (int i = 0; i < m; i++) {

        if (v[i] == maxim) {
            cout << i+1 << ": ";
            for (int j = 0; j < n; j++) {
                cout << setw(4) << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}