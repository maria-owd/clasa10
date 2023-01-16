#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n numere întregi.
 * Să se realizeze următoarele prelucrări:
 
 *  a. Să se decidă dacă elementele tabloului sunt distincte.
 *  b. Să se determine câte perechi din tablou sunt prime intre ele.
 *  c. Să se determine câte perechi din tablou au valori egale.
 *  d. Să se determine câte perechi din tablou au suma un număr prim cu cifra unităţilor egală cu 3.
 *  e. Să se determine câte triplete din tablou au valori egale.
 *  f. Să se determine câte triplete din tablou au proprietatea că una dintre valori este egală cu suma celorlalte două.
 *  g. Să se afişeze fiecare valoare din tablou o singură dată şi frecvenţa ei în tablou.
 */

int main () {

    int v[100] = {10, 33, 14, 42, 67, 85, 94, 42, 11, 24};
    int n = 9;
    bool diferit;
    int a, b, contor;
    int egale;
    int suma, divi, prime;

    diferit = true;
    egale = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[i] == v[j]) {
                diferit = false;
                egale++;
                //cout << v[i] << " apare de 2 ori, pe poz " << i << " si " << j << endl;
            }
        }
    }

    if (diferit) {
        cout << "SUNT diferite" << endl;
    } else {
        cout << "NU sunt diferite" << endl;
    }

    contor = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            a = v[i];
            b = v[j];

            while (a != b) {
                // cmmdc(0,x) = x
                if (a == 0) { 
                    a = b; 
                }
                if (b == 0) {
                    b = a;
                }

                // algoritmul lui euclid pt. cmmdc
                if (a > b){
                    a = a-b;
                } 
                if (b > a) {
                    b = b-a;
                }
            }

            // a->cmmdc
            if (a == 1) {
                contor++;
                //cout << v[i] << " si " << v[j] << " sunt prime intre ele" << endl;
            }


        }
    }

    prime = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            suma = v[i] + v[j];
            divi = 0;

            for (int k = 2; k <= suma/2; k++) {
                if (suma % k == 0) {
                    divi++;
                }
            }

            if (divi == 0) {
                if (suma % 10 == 3) {
                    prime++;
                    //cout << v[i] << " si " << v[j] << " au suma prima, cu ultima cifra 3" << endl;
                }
            }
        }
    }

    cout << "avem " << contor << " perechi de nr prime intre ele" << endl;
    cout << "avem " << egale << " perechi egale" << endl;
    cout << "avem " << prime << " perechi ce au suma nr prima, cu ultima cifra 3" << endl;
    
    return 0;
}