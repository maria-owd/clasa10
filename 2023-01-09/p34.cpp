#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n numere întregi. 
 * Să se insereze după fiecare număr impar din vector dublul acestuia.
 */

int main () {

    int v[100] = {3, -6, 1, 0, 2, 6, -8, 13};
    int n = 8;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 1) {
            for (int j = n; j > i; j--) {
                v[j] = v[j-1];
            }
            v[i+1] = v[i] * 2;
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