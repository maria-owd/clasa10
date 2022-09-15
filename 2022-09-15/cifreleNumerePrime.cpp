#include <iostream>

using namespace std;
int main (){

    int n, c, nrDivizori;

    cout << "baga un nr: ";
    cin >> n;


    while (n != 0){
        c = n % 10;
        n = n / 10;

        nrDivizori = 0;

        for (int i=2; i<=c/2; i++){
            
            if(c % i == 0){
                nrDivizori++;
            }
        }

        if (nrDivizori == 0){
            cout << c << " e cifra prima" << endl;
        }    
    }

    return 0;
}
 