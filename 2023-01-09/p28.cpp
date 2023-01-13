#include <iostream>
using namespace std;

/**
 * Fie un vector v  cu n numere întregi. 
 * Să se inlocuiasca toate valorile egale cu 
 * valoarea minimă cu valoarea maximă din tablou.
 */ 

int main () {

    int v[7] = {1,3,4,1,7,5,1};
    int n = 7;
    int minim, maxim;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    minim = v[0];
    maxim = v[0];

    for (int i = 0; i < n; i++) {
        if (v[i] < minim) {
            minim = v[i];
        }

        if (v[i] > maxim) {
            maxim = v[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == minim) {
            v[i] = maxim;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
