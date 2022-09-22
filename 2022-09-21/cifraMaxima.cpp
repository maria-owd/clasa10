#include <iostream>
using namespace std;

/** 
 * Cititi 2 nr: a, b;
 * Cate cifre din nr a sunt egale cu
 * cea mai mare cifra a lui b?
*/

int main() {

    int a, b, cifra, maxim, numarCifre;

    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    maxim = 0;
    
    while (b != 0){

        cifra = b%10;
        b = b/10;

        if (cifra > maxim){
            maxim = cifra;
        }
    }

    cout << "cifra maxima este: " << maxim << endl;

    numarCifre = 0;

    while (a != 0){
        cifra = a%10;
        a = a/10;

        if (cifra == maxim){
            numarCifre++;
        }
    }

    cout << "In numarul a avem " << numarCifre << " cifre egale cu cifra maxima a luui b" << endl;
    
    return 0;
}