#include <iostream>
using namespace std;

/**
 * Fie un vector v cu n numere întregi. 
 * Sa se elimine valorile pare din vector.
 */

int main () {
    int v[100] = {57, 34, 100, 643, 1002, 79, 266};
    int n = 7;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            for (int j = i; j < n-1; j++) {
                v[j] = v[j+1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}