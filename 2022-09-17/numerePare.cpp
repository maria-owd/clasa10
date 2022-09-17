#include <iostream>

using namespace std;

/**
 * Cititi nr. intregi, pana la citirea lui 0.
 * Apoi verificati daca toate nr cititte au
 * suma cifrelor si numarul cifrelor un nr. par
 */

int main () {
    int a, cifra, sumaCifre, numarCifre, erori;

    erori = 0; // optimist
    
    // citim primul nr
    cout << "a=";
    cin >> a;

    while (a != 0) {

        sumaCifre = 0;
        numarCifre = 0;

        while (a != 0){
            cifra = a % 10;
            a = a / 10;
            sumaCifre = sumaCifre + cifra;
            numarCifre++;
        }


        cout << "suma cifrelor este: " << sumaCifre << endl;
        cout << "numarul cifrelor este: " << numarCifre << endl;

        if (sumaCifre % 2 == 0 && numarCifre % 2 == 0){            
            cout << "atat suma, cat si numarul cifrelor sunt pare" << endl;
        } else {
            erori++;
        }

        // citim urmatorul nr
        cout << "a="; 
        cin >> a;
    }

    if (erori == 0) {
        cout << "toate numerele indeplinesc cerintele" << endl;
    } else {
        cout << "nu toate nr indeplinesc cerintele" << endl;
    }
    
    return 0; 
}
