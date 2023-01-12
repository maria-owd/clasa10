#include <iostream>
using namespace std;

/**
 * Sa se rearanjeze elementele unui tvector de numere atfel incat 
 * valorile reale sa fie la inceput 
 * iar cele intregi la sfarsit. 
 * Exemplu: pentru n=7 si v=(7, 3, 4.21, 4, 10, 56.23, 0.9) 
 * o solutie este: v=(4.21, 56.23, 0.9, 7, 4, 10).
 */

int main () {

    float v[7] = {7, 3, 4.21, 4, 10, 56.23, 0.9};
    float a[7];
    int b[7];
    int n = 7;
    int na, nb;

    nb = 0;
    na = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == (int)v[i]) {
            b[nb] = v[i];
            nb++;
        } else {
            a[na] = v[i];
            na++;
        }
    }

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