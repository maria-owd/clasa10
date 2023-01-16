#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector a cu n numere întregi. 
 * Să se genereze vectorul b pentru care fiecare componentă memorează 
 *  prima cifră a elementului de pe aceeaşi poziţie din tabloul a. 
 * Exemplu: 
 * Dacă a = (345, 61, 8, 900) se generează 
 *      b=(3, 6, 8, 9).
 */

int main () {

    int a[4] = {345, 61, 8, 900};
    int n = 4;
    int b[4];
    int cifra, copie;

    for (int i = 0; i < n; i++) {
        copie = a[i];
        cifra = 0;

        while (copie != 0) {
            cifra = copie % 10;
            copie = copie / 10;
        }

        b[i] = cifra;
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

  return 0;
}