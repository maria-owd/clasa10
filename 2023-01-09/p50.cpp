#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n numere întregi.
 * Să se determine dacă valoarea x citită de la tastatură se găseşte în vector. 
 * În caz afirmativ se va afişa
 *  cel mai mic indice pe care acesta se găseşte în vector altfel se va afişa un mesaj.
 */

int main () {
    int v[100];
    int n, x;
    bool apare;

    cout << "cate elemente contine vectorul: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    cout << "elemntele sunt: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "alege un nr: ";
    cin >> x;

    apare = false;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            cout << i << endl;
            apare = true;
            break;
        }
    }

    if (!apare) {
        cout << "nr dorit nu apare in vector" << endl;
    }

    return 0;
}
