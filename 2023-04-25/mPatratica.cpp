#include <iostream>
#include <fstream>
#include <iomanip>

/**
 * matrice cu maxim 10 linii și 10 coloane.
 * Determinarea mediei aritmetice a tuturor elementelor de deasupra diagonalei principale.
 * Determinarea produsului tuturor numerelor impare și pozitive de deasupra diagonalei secundare 
 * și afișarea lui pe ecran 
 * sau afișarea unui mesaj, dacă produsul nu poate fi calculat.
 */
using namespace std;

int main () {
    int a[10][10];
    int n, nr, produs;
    float suma; 

    ifstream f("date1.in");

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

    suma = 0;
    nr = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            suma = suma + a[i][j];
            nr++;
        }
    }
    cout << "media de deasupra dp: " << suma/nr << endl;

    produs = 1;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            
            if (a[i][j] % 2 != 0 && a[i][j] > 0) {
                produs = produs * a[i][j];
            }
        }
    }
    cout << "produsul deasupra ds: " << produs << endl;


}