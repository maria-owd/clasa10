#include <iostream>
using namespace std;

/**
 * Se citesc elem. unui vector cu cel mult n nr intregi (n<=100) ordonate crescător. 
 * Să se afişeze fiecare valoare şi frecvenţa ei în tablou.
 */

int main () {

    int v[11] = {3, 3, 3, 6, 8, 9, 9, 13, 13, 18, 18};
    int n = 11;
    int contor, poz;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        contor = 0;
        poz = i;

        while (v[i] == v[poz]) {
            contor++;
            poz++;
        }

        cout << "elementul " << v[i] << " apare de " << contor << " ori" << endl;
        i = poz-1;
    }
    
    return 0;
}