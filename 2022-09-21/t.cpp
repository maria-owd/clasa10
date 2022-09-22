

/** Se citește de la tastatură o valoare naturală x, unde x>10.
Dacă valoarea
citită are cifra unităților egală cu cifra zecilor se vor afișa 
primele două numere naturale mai mari decât valoarea x. 

În caz contrar se va afișa cifra maximă dintre cifra zecilor și a unităților.
Exemplu: Pentru x=3455 se va afișa 3456 3457 Pentru x=3485 se va afișa 8. 
*/

#include <iostream>
using namespace std;

int main() {

    int x, maxim, unitati, zeci, rang;

    cout << "x=";
    cin >> x;

    if (x <= 10){
        return 1; // erroare
    } 
    unitati = x%10;
    zeci = (x/10) % 10;
    
    //cout << unitati << endl;
    //cout << zeci << endl;

    if (unitati == zeci){
        cout << x+1 << " si " << x+2 << endl;
    } else {
        if (unitati < zeci){
            maxim = zeci;
        } else {
            maxim = unitati;
        }
        cout << "cifra maxima e " << maxim << endl;
    }

    
    
    return 0;
}