#include <iostream>
using namespace std;
 /**
  * Citeste si afiseaza un vectoru cu maxim 30 elemente.
  * Sterge ultimul nr strict pozitiv care are suma cifrelor numar prim.
  * Inserati dupa primul nr. strict negativ un element a carui valoare
  *     sa fie egala cu suma cifrelor ultimului elemnt par.
  * Afisati dupa fiecare transformare.
  */

 int main () {

    int v[10] = {4, 142, -9, -1001, 1, 6, -32, 15};
    int n = 8;
    int copie, suma, cifra, divizori;
    int p = -1;

    cout << "vectorul este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = n-1; i >= 0; i--) {
        if (v[i] > 0) {
            copie = v[i];
            suma = 0;
            while (copie != 0) {
                cifra = copie % 10;
                suma = suma + cifra;
                copie = copie / 10;
            }
            divizori = 0;
            for (int j = 2; j <= suma/2; j++) {
                if (suma % j == 0) {
                    divizori++;
                }
            }
            if (divizori == 0) {
                p = i;
                break;
            }
        }
    }
    
    if (p >= 0) {
        cout << "eliminam pozitia " << p << ": " << v[p] << endl;
        for (int i = p+1; i < n; i++) {
            v[i-1] = v[i];
        }
        n--;
    } else {
        cout << " nu exista elemnte ele,ente pozitive cu suma cifrelor prima" << endl;
    }

    cout << "noul vector este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // calculam ultimul element par
    for (int i = n-1; i >= 0; i--) {
        if (v[i] % 2 == 0) {
            copie = v[i];
            suma = 0;
            while (copie != 0) {
                cifra = copie % 10;
                suma = suma + cifra;
                copie = copie / 10;
            }
            break;
        }
    }

    //cautam primul nr strict negativ
    p = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            p = i;
            break;
        }
    }

    //inseram elementul cerut
    if (p >= 0) {
         cout << "inseram " << suma << " dupa pozitia " << p << endl;
        for ( int i = n; i > p; i--) {
            v[i] = v[i-1];
        }
        v[p+1] = suma;
        n++;
    } else {
        cout << "nu avem elemente negative" << endl;
    }

    cout << "noul vector este: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}