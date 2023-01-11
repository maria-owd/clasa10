#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n (n<=l00) numere întregi 
 *  cu cel mult patru cifre ordonate crescător. 
 * Să se determine dacă valoarea x citită de la tastatură se găseşte în tablou.
 * În caz afirmativ se va afişa o poziţie pe care acesta se găseşte, 
 *  altfel se va afişa un mesaj.
 */

int main () {

    int v[6] = {3, 6, 9, 18, 13, 100};
    int n = 6;
    int x, poz;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "x = ";
    cin >> x;

    poz = -1;
    for (int i = 0; i < n; i++) {
        if (x == v[i]) {
            poz = i;
            break;
        }
    }

    if (poz != -1) {
        cout << "pozitia este: " << poz << endl;
    } else {
        cout << "numarul nu se regaseste in vector" << endl;
    }

    return 0;
}