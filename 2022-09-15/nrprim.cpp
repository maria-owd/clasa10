#include <iostream>

using namespace std;
int main (){

    int n, nrDivizori, nrPrime, x;

    cout << "cate nr prime doritri sa vezi: ";
    cin >> x;

    n = 2;
    nrPrime = 0;

    while (nrPrime < x){
        
        // ----
        nrDivizori = 0;
        for (int i=2; i<=n/2; i++){
            
            if (n % i == 0){
                nrDivizori++;
            }
        }

        if (nrDivizori == 0){
            nrPrime++;
            cout << n << " e nr prim: " << nrPrime << endl;
        } 
        //----

        n++;
    }
    

    return 0;
}