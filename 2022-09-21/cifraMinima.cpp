#include <iostream>
using namespace std;

/**
 * Cititi n nr nat.
 * Cate din nr citite contin cel putin
 * o cifra egala cu cea mai mica a primului nr.
 */

int main () {

    int n, a, cifra, minim, cifreEgale, nrNumere;

    cout << "Cate nr cititi: ";
    cin >> n;

    cout << "introdu un nr: ";
    cin >> a;

    n--;

    minim = 10;

    while (a != 0){
        cifra = a % 10;
        a = a / 10;

        if (cifra < minim){
            minim = cifra;
        }
        
    }

    cout << "Cifra minima este: " << minim << endl;
    
    nrNumere = 0;

    while (n != 0){

        cout << "introdu un nr: ";
        cin >> a;
        
        cifreEgale = 0;
        
        while (a != 0){
            cifra = a % 10;
            a = a / 10;

            if (cifra == minim){
                cifreEgale++;
            }
        }

        cout << "nr cifrelor egale cu minimul este: " << cifreEgale << endl;

        if (cifreEgale > 0){
            nrNumere++;
        }

        n--;
    }

    cout << "avem " << nrNumere << " numere ce au cel putin o cifra egala cu minimul primului nr" << endl;

    return 0;
}
