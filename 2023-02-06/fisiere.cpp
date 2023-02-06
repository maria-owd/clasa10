#include <iostream>
#include <fstream>

using namespace std;

/**
 * Preluati din date.in toate nr nat pe care le contine si formati vectorul v.
 * Afisati in date.out:
 *  elementele vectorului
 *  primul nr prim din vector si poz sau "nu exista"
 *  ultimul elem palindrom si poz pe care apare sau "nu avem palindrom"
 */

int main () {
    ifstream f("date.in");
    ofstream g("date.out");

    int x;
    int v[100];
    int n;
    int divi;
    bool gasit;
    int copie, cifra, oglindit;

    // citirea din vector
    n = 0;
    while (f >> x) {
        v[n] = x;
        n++;
    }
    f.close();

    for (int i = 0; i < n; i++) {
        g << v[i] << " ";
    }
    g << endl;
    
    // primul nr prim
    gasit = false;
    for (int i = 0; i < n; i++) {
        divi = 0;
        for (int j = 2; j <= v[i]/2; j++) {
            if (v[i] % j == 0) {
                divi++;
            }
        }

        if (divi == 0) {
            g << v[i] << " " << i << endl;
            gasit = true;
            break;
        }
    }

    if (!gasit) {
        g << "Nu exista" << endl;
    }

    //ultimul palindrom
    gasit = false;

    for (int i = n-1; i >= 0 && !gasit; i--) {
        copie = v[i];
        oglindit = 0;

        while (copie != 0) {
            cifra = copie % 10;
            oglindit = oglindit * 10 + cifra;
            copie = copie / 10;
        }

        if (v[i] == oglindit) {
            g << oglindit << " " << i << endl;
            gasit = true;
        }
    }

    if (!gasit) {
        g << "Nu exista" << endl;
    }    

    g.close();
    return 0;
}