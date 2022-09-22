/**
 * Cititi nr. intregi, pana la citirea lui 0.
 * Apoi verificati daca toate nr cititte au
 * suma cifrelor si numarul cifrelor un nr. par
*/
 
#include <iostream>
using namespace std;

int main() {

    int a, cifra, sumaCifre, nrCifre, gresite;

    cout << "a=";
    cin >> a;

    gresite = 0;

    while (a != 0){

        sumaCifre = 0;
        nrCifre = 0;

        while (a != 0){
            cifra = a%10;
            a = a/10;
            sumaCifre = sumaCifre + cifra;
            nrCifre++;
        }

        if (sumaCifre % 2 != 0 || nrCifre % 2 != 0){
            gresite++;
        }

        cout << "a=";
        cin >> a;
    }

    if (gresite != 0){
        cout << "nu toate nr indeplinesc conditiile" << endl;
    } else {
        cout << "toate numerele respecta conditiile" << endl;
    }

    return 0;
}