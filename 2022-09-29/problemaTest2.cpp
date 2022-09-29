 #include <iostream>
using namespace std;

int main (){

    int a, cifra, cifreImpare, numarNumere;

    cout << "baga un nr: ";
    cin >> a;

    numarNumere = 0;

    while (a != 3){

        cifreImpare = 0;

        while (a != 0){
            cifra = a % 10;
            a = a / 10;

            if (cifra % 2 != 0){
                cifreImpare++;
            } 
        }

        if (cifreImpare == 0){
            numarNumere++;
        }
    
        cout << "mai baga un nr: ";
        cin >> a;
    } 

    if (numarNumere == 0){
        cout << "nu exista" << endl;
    } else {
        cout << "avem " << numarNumere << " numere ce au doar cifre pare" << endl;
    }

    return 0;
}