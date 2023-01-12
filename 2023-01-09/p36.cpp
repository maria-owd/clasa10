#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector v cu n numere întregi cu cel mult patru cifre. 
 * Să se insereze după fiecare valoare egală cu 0 din tablou 
 * valorile 1, 2 şi 3. 
 * Exemplu. 
 * Dacã v=(5, 0, 4, 0, 0, 7) se obţine: v=(5, 0, 1, 2, 3, 4, 0, 1, 2, 3, 0, 1, 2, 3, 7)
 */

int main () {

    int v[100] = {5, 0, 4, 0, 0, 7};
    int n = 6;

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            for (int j = n-1; j > i; j--) {
                v[j+3] = v[j];
            }
            v[i+1] = 1;
            v[i+2] = 2;
            v[i+3] = 3;
            n = n+3;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}