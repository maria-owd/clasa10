#include <iostream>
#include <iomanip>
#include <fstream>

/**
 *  Se consideră un tablou bidimensional cu m linii şi n coloane (1<m<100,1<n<100), ale cărui elemente aparţin
    mulţimii {0,1,2}.
    Scrieţi un program care citeşte de la tastatură valorile m, n şi elementele tabloului şi care
    afişează pe ecran 
    numerele de ordine ale coloanelor pentru care produsul elementelor situate pe ele, este maxim. 
    Liniile şi coloanele tabloului se numerotează de la 1 la m respectiv de la 1 la n. 
    Numerele se vor afişa separate prin câte un spaţiu.
 */


using namespace std;
int main() {

    int a[100][100];
    int m = 4, n = 4;
    int produs;
    int v[4], maxim;

    ifstream f("date7.in");
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }

    maxim = 0;
    for (int j = 0; j < n; j++) {
        produs = 1;
        for (int i = 0; i < m; i++) {
            produs = produs * a[i][j];
        }

        v[j] = produs;

        if (produs > maxim) {
            maxim = produs;
        }
    }
    
    for (int j = 0; j < n; j++) {
        if (v[j] == maxim) {
            cout << j+1 << " ";
        }
    }
    cout << endl;

    return 0;
}