#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * daca matricea este nepatratica --> un vector cu elem. prime + ordonat crescator
 * daca matricea este patratica --> un vector cu elem. din E si V + ordonat descrescator
 * OBS! 2 metode de ordonare diferite
 */

int main()
{

    int a[100][100];
    int m, n, divi, p, aux;
    bool schimbare;
    int v[100];

    ifstream f("date.in");
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
    p = 0;
    if (m != n) {
        // matrice nepatratica
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                divi = 0;
                for (int d = 2; d <= a[i][j] / 2; d++) {
                    if (a[i][j] % d == 0) {
                        divi++;
                    }
                }
                if (divi == 0) {
                    v[p] = a[i][j];
                    p++;
                }
            }
        }
        // sortare directa
        for (int i = 0; i < p - 1; i++) {
            for (int j = i + 1; j < p; j++) {
                if (v[j] < v[i]) {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }

    } else {
        // matrice patratica

        // Est
        for (int j = n / 2 + 1; j < n; j++) {
            for (int i = n - j; i < j; i++) {
                v[p] = a[i][j];
                p++;
            }
        }
        // Vest
        for (int j = 0; j < n / 2; j++) {
            for (int i = j + 1; i < n - 1 - j; i++) {
                v[p] = a[i][j];
                p++;
            }
        }
        // bubble sort
        do {
            schimbare = false;
            for (int i = 0; i < p - 1; i++) {
                if (v[i] < v[i + 1]) {
                    aux = v[i];
                    v[i] = v[i + 1];
                    v[i + 1] = aux;
                    schimbare = true;
                }
            }
        } while (schimbare);
    }
    // afisare vector sortat
    cout << "v: ";
    for (int i = 0; i < p; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}