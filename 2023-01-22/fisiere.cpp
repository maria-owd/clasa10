#include <iostream>
#include <fstream>
using namespace std;

/**
 * În fișierul date.in se găsesc mai multe numere întregi. 
 * Memorați aceste numere într-un vector, 
 *  apoi afișați-le ordonate crescător în fișierul date1.out. 
 * Afișați în fișierul date2.out cel mai mare, respectiv cel mai mic număr din vector, 
 *  precum și poziția/pozițiile pe care se găseau aceste numere în vector înainte de ordonarea acestuia.
 */

int main () {
    ifstream f("date.in");
    ofstream g("date1.out");
    ofstream h("date2.out");

    int x;
    int v[100];
    int n, schimbare, aux;
    int minim, maxim;
    int pmin[100], pmax[100];
    int nmin, nmax;
    
    n = 0;

    while (f >> x) {
        v[n] = x;
        n++;
    }
    f.close();

    minim = v[0];
    maxim = v[0];
    nmin = 0;
    nmax = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < minim) {
            minim = v[i];
            nmin = 0;    
        }

        if (v[i] == minim) {
            pmin[nmin] = i;
            nmin++;
        }

        if (v[i] > maxim) {
            maxim = v[i];
            nmax = 0;
        }

        if (v[i] == maxim) {
            pmax[nmax] = i;
            nmax++;
        }
    }

    do {
        schimbare = 0;
        for (int i = 0; i < n-1; i++) {
            if (v[i] > v[i+1]) {
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
                schimbare = 1;
            }
            
        }
    } while (schimbare == 1);

    for (int i = 0; i < n; i++) {
        g << v[i] << " ";
    }
    g.close();

    h << "minimul este: " << minim << " de pe pozitia: ";
    for (int i = 0; i < nmin; i++) {
        h << pmin[i] << " ";
    }
    h << endl;

    h << "maximul este: " << maxim << " de pe pozitia: ";
    for (int i = 0; i < nmax; i++) {
        h << pmax[i] << " ";
    }
    h << endl;
    h.close();

    return 0;
}