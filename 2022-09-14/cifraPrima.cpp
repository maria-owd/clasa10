#include <iostream>

using namespace std;

/** 
 * Se citesc n nr nat.  
 * Numarati cate din cele n nr incep cu o cifra nr prima
 */ 

// 1. citesti n numere
// 2. pentru fiecare nr CALCULEZ prima cifra
// 3. verifica daca prima cifra (aia calculata) e PRIMA => numar
// 4. afisez nr. calculat la #3

int main (){

    int n, a, copieA, cifra, numarDivizori, contor, sumaNumere, sumaCifre, cifrePrime;

    cout << "Cate nr. doriti sa cititi: ";
    cin >> n;

    contor = 0;
    sumaNumere = 0;
    
    while (n != 0) {
        // citesti nr
        cout << "introduceti un nr: ";
        cin >> a;

        copieA = a;

        sumaCifre = 0;

        // calculez prima cifra
        while (a != 0) {
            cifra = a % 10;
            a = a / 10;
            sumaCifre = sumaCifre + cifra;
        }
        // cout << "prima cifra este: " << cifra << endl;

        cifrePrime = 0;

        for (int i=2; i<= sumaCifre/2; i++){
            if (sumaCifre % i == 0){
                cifrePrime++;
            }
        }

        if (cifrePrime == 0){
            sumaNumere = sumaNumere + copieA;
        }

        // aflu daca e nr. prim

        numarDivizori = 0;

        for (int j=2; j <= cifra/2; j++) {
            if (cifra % j == 0) {
                numarDivizori++;
            }
        }
       // cout << "am gasit " << numarDivizori <<" divizori" << endl;

        if (numarDivizori == 0){
            //cout << "cifra este prima" << endl;
            contor++;
        }
        n--;
    }

    cout << "avem " << contor << " numere cu cifra prima" << endl;
    cout << "suma nr cu suma cifrelor nr prim este: " << sumaNumere << endl;

    return 0;  
}

