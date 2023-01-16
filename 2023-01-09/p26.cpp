#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector a cu n numere întregi.
 * Să se genereze vectorul b pentru care fiecare componentă memorează 
 *  numãrul de cifre al elementului de pe aceeaşi poziţie din tabloul a. 
 * Exemplu. 
 *  Dacă a=(345, 61, 8, 900) se genereaza 
 *       b=(3, 2, 1, 3).
 */

int main () {

    int a[4] = {345, 61, 8, 900};
    int n = 4;
    int b[4];
    int copie, nrCifre;

    for (int i = 0; i < n; i++) {
        nrCifre = 0;
        copie = a[i];

        while (copie != 0) {
            nrCifre++;
            copie = copie / 10;
        }
        
        b[i] = nrCifre;
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    

    

    return 0;
}