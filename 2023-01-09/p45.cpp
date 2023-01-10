#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui tablou unidimensional a cu n (n<=100) numere întregi 
 * cu cel mult patru cifre. 
 * Să se elimine din componente astfel încât 
 *  oricare două componente alãturate să
    aibă paritate diferită. 
    Exemplu. pentru a=(3, 4, 6, 4, 3, 3, 2, 6, 1) se obţine a=(3, 4, 3, 2, 1).
 */

int main () {

    int a[9] = {3, 4, 6, 4, 3, 3, 2, 6, 1};
    int n = 9;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n-1; i++) {
        if ((a[i] + a[i+1]) % 2 == 0) {
            for (int j = i+1; j < n-1; j++) {
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}