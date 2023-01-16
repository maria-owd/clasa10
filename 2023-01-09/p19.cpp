#include <iostream>
using namespace std;

/**
 * Se citesc de la tastatură un număr natural nenul n şi apoi cele n numere întregi, 
 * reprezentând elementele unui vector v. 
 * Afisati câte dintre elementele vectorului pot fi scrise ca
 *  sumă a celor două elemente alaturate. 
 * În cazul în care nu existã nici un astfel de element se va afişa valoarea 0. 
 * Exemplu: 
 *  Dacă tabloul are conţinutul: 2 7 5 1 4 2 -2 5 se afişează 2.
 */

int main () {
    int v[8] = {2, 7, 5, 1, 4, 2, -2, 5};
    int n = 8;
    int contor = 0;

    for (int i = 1; i < n-1; i++) {
        if (v[i] == v[i-1] + v[i+1]) {
            contor++;
            cout << v[i] << " = " << v[i-1] << " + " << v[i+1] << endl;
        }
    }

    cout << contor << endl;

    return 0;
}