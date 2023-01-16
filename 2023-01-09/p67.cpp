#include <iostream>
using namespace std;

/**
 * Se consideră doi vectori a şi b fiecare având cel mult 100 de numere
naturale ordonate strict crescator. 
* Se cere să se afişeze pe ecran, 
*   în ordine crescatoare a numerelor prime din cei doi vectori.
*  Exemplu: a=(1 2 3 4 7 20 24 60), 
*    iar b:(1 3 4 7 8 9 10 20 24) 
*    atunci se vor afişa pe ecran valorile: 2 3 3 7 7.
*/

int main () {

    int a[100] = {1, 2, 3, 4, 7, 20, 24, 60};
    int n = 8;
    int b[100] = {1, 3, 4, 7, 8, 9, 10, 20, 24};
    int m = 9;
    int c[100];
    int p = 0; 
    int divi;
    bool ok;
    int t;

    for (int i = 0; i < n; i++) {
        divi = 0;

        for (int j = 2; j <= a[i]/2; j++) {
            if (a[i] % j == 0) {
                divi++;
            }
        }

        if (divi == 0 && a[i] >= 2) {
            c[p] = a[i];
            p++;
        }
    }

    for (int i = 0; i < m; i++) {
        divi = 0;

        for (int j = 2; j <= b[i]/2; j++) {
            if (b[i] % j == 0) {
                divi++;
            }
        }

        if (divi == 0 && b[i] >= 2) {
            c[p] = b[i];
            p++;
        }
    }

    do {
        ok = true;
        for ( int i = 0; i < p-1; i++) {
            if (c[i] > c[i+1]) {
                t = c[i+1];
                c[i+1] = c[i];
                c[i] = t;
            }
        }
    } while (!ok);

    for (int i = 0; i < p; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    
}