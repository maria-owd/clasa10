/** 
 * Se citesc n nr nat.  
 * Numarati cate din cele n nr incep cu o cifra nr prima
 */ 

// 1. citesti n numere
// 2. pentru fiecare nr CALCULEZ prima cifra
// 3. verifica daca prima cifra (aia calculata) e PRIMA => numar
// 4. afisez nr. calculat la #3

#include <iostream>
using namespace std;

int main() {

    int n, a, cifra, nrDivizori, nrNumere, copie;

    cout << "cate nr citesti: ";
    cin >> n;

    nrNumere = 0;

    while (n != 0){
        cout << "a=";
        cin >> a;
        copie = a;

        while (a != 0){
            cifra = a%10;
            a = a/10;
        }

        nrDivizori = 0;

        for (int i=2; i <= cifra/2; i++){
            if (cifra % i == 0){
                nrDivizori++;
            }
        }

        if (nrDivizori == 0 && copie > 1){
            nrNumere++;
        }

        n--;
    } 

    cout << nrNumere << endl;

    return 0;
}