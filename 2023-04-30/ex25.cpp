#include <iostream>
#include <fstream>
#include <iomanip>

/*
    schimba min cu max de pe ds
*/
using namespace std;
int main () {

    int a[100][100];
    int n, minim, maxim, l, c, L, C, t;
    
    ifstream f("date25.in");
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
            cout << setw (4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    minim = a[0][0];
    maxim = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i+j == n-1) {
                if (a[i][j] < minim) {
                    minim = a[i][j];
                    l = i;
                    c = j;
                }
                if (a[i][j] > maxim) {
                    maxim = a[i][j];
                    L = i;
                    C = j;
                }
            }
        }
    }
    t = a[l][c];
    a[l][c] = a[L][C];
    a[L][C] = t;

    cout << "noua matrice este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw (4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}