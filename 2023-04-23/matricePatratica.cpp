#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/**
 * Citiți dintr-un fisier  o matrice patratica cu numere intregi.
 * Afisati matricea pe ecran.
 * Determinati si afisati care este cel mai mic element de pe diagonala principala 
 * si care este cel mai mare element de pe diagonala secundara.
 * Numarati si afisati cate elemente negative contin impreuna cele doua diagonale.
 */
int main() {
    int a[100][100];
    int n, minim, maxim, negative;

    ifstream f("date.in");

    f >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(2) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    minim = a[0][0];
    maxim = a[n-1][0];
    negative = 0;
    for (int i = 0; i < n; i++) {
        if (a[i][i] < minim) {
            minim = a[i][i];
        }
        if (a[i][n-1-i] > maxim) {
            maxim = a[i][n-1-i];
        }
        if (a[i][i] < 0) {
            negative++;
        }
        if (a[i][n-1-i] < 0) {
            negative++;
        }
    }
    cout << "minimul dp: " << minim << endl;
    cout << "maximul ds: " << maxim << endl;
    cout << "sunt " << negative << " nr negative pe diagonale" << endl;
    return 0;
}