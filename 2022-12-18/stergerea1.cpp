#include <iostream>
using namespace std;
/**
 * cititi si afisati un vector
 * stergeti din vector toate elementele care au ultima cifra egala cu prima cifra a primului element din vector. Afisati
 * inserati in vector dupa fiecare valoare egala cu valoarea minima, valoarea egala cu cea maxima. Afisati
 */
int main () {
    int v[10] = {468, 142, 94, 6, 11, 6, 324, 15};
    int n = 8;
    int copie, cifra, minim, maxim;
    cout << "elementele vectorului sunt: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // aflam prima cifra a primului element 
    copie = v[0];
    while (copie != 0) {
        cifra = copie % 10;
        copie = copie / 10;
    }
    cout << "prima cifra este " << cifra << endl;

    // cautam elementele cu ultima cifra egala
    for (int i = 1; i < n; i++) {
        if (v[i] % 10 == cifra) {
            for (int j = i+1; j < n; j++) {
                v[j-1] = v[j];
            }
            n--;
        }
    }

    cout << "elementele vectorului dupa stergere sunt: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // aflam minimul si maximul
    maxim = v[0];
    minim = v[0];

    for (int i = 0; i < n; i++) {
        if (v[i] > maxim) {
            maxim = v[i];
        }
        if (v[i] < minim) {
            minim = v[i];
        }
    }
    cout << "maximul e " << maxim << " si minimul e " << minim << endl;
    // cautam elementele minime, inseram maximul
    for (int i = 0; i < n; i++) {
        if (v[i] == minim) {
            for (int j = n; j > i+1; j--) {
                v[j] = v[j-1];
            }
            v[i+1] = maxim;
            n++;
        }
    }
    cout << "elementele vectorului dupa inserare sunt: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}