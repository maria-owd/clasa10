#include <iostream>
using namespace std;

/**
 * Se citesc elementele a doi vectori v, w  cu m respectiv n 
 * componente numere întregi cu cel mult patru cifre fiecare. 
 * Să se insereze valorile vectorului w înainte de componenta 
 * de indice p din vectorul v. 
 * 
 * Exemplu. 
 *  Dacă v: (3,4,1,5,7), w=(8,9,10,11), p=4 
 *  se obţine: v=(3,4,1,8,9,10,11,5,7).
 * 
 */

int main () {

    int v[100] = {3,4,1,5,7};
    int w[4] = {8,9,10,11};
    int m = 5;
    int n = 4;
    int p = 4; // pozitia incepe de la 1


    for (int i = 0; i < n; i++) {
        v[m] = v[p-1+i]; // mut elementul la sfarsit
        v[p-1+i] = w[i]; // inserez noul element
        m++;
    }
   
    
    for (int i = 0; i < m; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}