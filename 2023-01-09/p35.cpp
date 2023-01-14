#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n numere întregi. 
 * Să se insereze după fiecare număr par din vector oglinditul acestuia.
 */

int main () {
    int v[100] = {57, 34, 1002, 79, 266};
    int n = 5;
    int ogl, copie, cifra;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            ogl = 0;
            copie = v[i];

            while (copie != 0) {
                cifra = copie % 10;
                ogl = ogl * 10 + cifra;
                copie = copie / 10;
            }

            for (int j = n-1; j >= i+1; j--) {
                v[j+1] = v[j];
            }
            v[i+1] = ogl;
            n++;
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}