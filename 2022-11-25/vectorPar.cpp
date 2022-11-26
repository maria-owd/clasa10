#include <iostream>
using namespace std;

/**
 * Formati din toate elementele pare ale unui vector 
 * un nou vector x care sa contina suma cifrelor fiecraui element par.
 * ordonati descrescator vectorul x, inf de prima cifra a fiecarui element
 */

int main (){

    int v[10] = {143, 72, 905, 11, 408, 12, 10};
    int n = 7;
    int x[10];
    int c[10];
    int p;
    int suma, cifra, copie;
    int schimbare, aux;

    p = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            copie = v[i];
            suma = 0;
            while (copie != 0) {
                cifra = copie % 10;
                suma = suma + cifra;
                copie = copie / 10;
            } 
            x[p] = suma;
            p++;
        }
    }

    for (int i = 0; i < p; i++) {
        copie = x[i];
        while (copie != 0) {
            cifra = copie % 10;
            copie = copie / 10; 
        }
        c[i] = cifra;
    }

    do {
        schimbare = 0;
        for (int i = 0; i < p-1; i++) {
            if (c[i] < c[i+1]) {
                aux = c[i];
                c[i] = c[i+1];
                c[i+1] = aux;
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
                schimbare = 1;
            }
        }
    } while (schimbare == 1);

    cout << "x: ";
    for (int i = 0; i < p; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}
