#include <iostream>
using namespace std;

/**
 * Sa se rearanjeze elementele unui vector de numere intregi astfel incat
 * numerele prime sa fie situate la inceput crescator, 
 * iar numerele care nu sunt prime sa fie grupate la sfarsit descrescator.
 */

int main () {
    int v[7] = {23, 2, 100, 17, 1002, 5, 266};
    int n = 7;
    int a[7]; //contine nr prime
    int b[7]; //contine nr neprime
    int na, nb;
    int divi;
    int t;
    bool corect;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    na = 0;
    nb = 0;

    for (int i = 0; i < n; i++) {
        divi = 0;
        for (int j = 2; j <= v[i]/2; j++) {
            if (v[i] % j == 0) {
                divi++;
            }
        }

        if (divi == 0) {
            a[na] = v[i];
            na++;
        } else {
            b[nb] = v[i];
            nb++;
        }
    }

    do {
        corect = true;
        for ( int i = 0; i < na-1; i++) {
            if (a[i] > a[i+1]) {
                t = a[i+1];
                a[i+1] = a[i];
                a[i] = t;
                corect = false;
            }
        }
    } while (!corect);

    /** for (int i = 0; i < na; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    */

    do {
        corect = true;
        for ( int i = 0; i < nb-1; i++) {
            if (b[i] < b[i+1]) {
                t = b[i+1];
                b[i+1] = b[i];
                b[i] = t;
                corect = false;
            }
        }
    } while (!corect);

   /* for (int i = 0; i < nb; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    */ 

    for (int i = 0; i < na; i++) {
        v[i] = a[i];
    }

    for (int i = 0; i < nb; i++) {
        v[na+i] = b[i];
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

