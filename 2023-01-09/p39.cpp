#include <iostream>
using namespace std;

/**
 * Să se elimine valoarea x 
 *  dintr-un tablou v unidimensional 
 *  cu n numere intregi (n<=100) care
 *  memorează valori distincte.
 */

int main () {

    int v[7] = {3, 18, 6, 9, 18, 13, 8};
    int n = 7;
    int x;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "ce element doriti sa eliminati: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            for (int j = i; j < n-1; j++) {
                v[j] = v[j+1]; 
            }
            n--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}