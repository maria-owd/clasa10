/**
 se citesc N numere naturale - sa se afiseze
  - cate numere formate doar din cifrele impare (in aceeasi ordine)  sunt prime
  - media numerelor formate doar din cifrele pare in ordine inversa
 */

#include <iostream>
using namespace std;

int main() {

    int n, a, impar, cifra, rang, nrDivizori, nrImpare, par, nrPare, sumaPare;

    cout << "cate nr citesti: ";
    cin >> n;

    nrImpare = 0;
    nrPare = 0;
    sumaPare = 0;

    while (n != 0){
        cout << "a=";
        cin >> a;

        impar = 0;
        rang = 1;
        par = 0;

        while (a != 0){
            cifra = a%10;
            a = a/10;

            if (cifra % 2 == 1){
                impar = cifra * rang + impar;
                rang = rang * 10;
            } else {
                par = par * 10 + cifra;
            }
        }

        cout << "\t impare = " << impar << "\t pare = " << par << endl;

        if (par != 0) {
            sumaPare = sumaPare + par;
            nrPare++;
         }
        
        if (impar > 1) {
            nrDivizori = 0;

            for (int i=2; i <= impar/2; i++){
                if (impar % i == 0){
                    nrDivizori++;
                }

            }

            if (nrDivizori == 0){
                nrImpare++;
            }
        }

        n--;
    }

    cout << nrImpare << endl;
    cout << "suma nr pare e: " << sumaPare << endl;
    cout << sumaPare / nrPare << endl;

    return 0;
}