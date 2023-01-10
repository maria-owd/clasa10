#include <iostream>
using namespace std;

/**
 * Scrieţi un program care citeşte de la tastatură 
 *  un număr natural n din intervalul [2,10000] şi
    apoi n numere reale şi afişează pe ecran 
    câte dintre cele n numere reale sunt egale cu media
    aritmetică a celorlalte n-1 numere reale.
 */

int main () {

    int v[6] = {3, 6, 9, 18, 13, 5};
    int n = 6;
    int suma, contor;
    float media;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    contor = 0;

    for (int i = 0; i < n; i++) {
        suma = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                suma = suma + v[j];
            }
        }

        media = (float)suma / (n-1);
        if ((float)v[i] == media) {
            contor++;
            cout << "v[" << i << "] = " << v[i] << " \t" << suma << "\t" << media << endl;
        }
    }

    cout << "avem " << contor << " elemnte corespunzatoare" << endl;
    return 0;
}