#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector v cu n componente numere întregi.
 * Sa se determine pe ce poziţie se va situa 
 *  primul element din vector după ordonare crescatoare, 
 *  fără a se ordona vectorul. 
 * Exemplu. 
 *  pentru n=8, şi v:(3, -6, 1, O, 2, 6, -8, 13) se afişează 6.
 */

int main () {

    int v[8] = {3, -6, 1, 0, 2, 6, -8, 13};
    int n = 8;
    int mici;

    mici = 0;
    for (int i = 1; i < n; i++) {
        if (v[0] > v[i]) {
            mici++;
        }
    }

    cout << "se va afla pe pozitia " << mici + 1 << endl;

    return 0;
}