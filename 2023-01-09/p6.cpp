#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n componente numere întregi.
 * Să se determine dacă oricare doua elemente alaturate din vector au parităţi diferite.
 */

int main () {

    int v[4] = {28, 73, 9, 62};
    int n = 4;

    for (int i = 0; i < n-1; i++) {
        if ((v[i] + v[i+1]) % 2 == 1) {
            cout << v[i] << " si " << v[i+1] << " au paritati diferite" << endl;
        } else {
            cout << v[i] << " si " << v[i+1] << " au paritati egale" << endl;
        }        
    } 
    
    return 0;
}