 #include <iostream>
using namespace std;

int main (){

    int n, a, cifra, nrDivizori, nrCifre, numarNumere;

    cout << "Cate nr citesti: ";
    cin >> n;

    numarNumere = 0;

    while (n != 0){
        cout << "baga un nr: ";
        cin >> a;

        nrCifre = 0;
        
        while (a != 0){
            cifra = a % 10;
            a = a / 10;
            
            nrDivizori = 0;
            for (int i=2; i <= cifra/2; i++){
                if (cifra % i == 0){
                    nrDivizori++;
                }
            }
        
            if (nrDivizori == 0){
                nrCifre++;
            }
        }

        if (nrCifre == 2){
            numarNumere++;
        }
        
        n--;
    }

    cout << "Avem " << numarNumere << " numere ce au 2 cifre prime" << endl;

    return 0;
}