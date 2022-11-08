 #include <iostream>
using namespace std;

/**
 * Se citește de la tastură un număr natural n,
 * apoi n numere naturale. 
 * Să se afişeze cel mai mic număr care 
 * poate fi scris folosind prima cifră a numerelor citite.
 */

int main() {

    int v[10] = {0,0,0,0,0,0,0,0,0,0};
    int n, a, cifra, x;

    cout << "Alege un nr = ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "introduce un nr: ";
        cin >> a;
        while (a != 0) {
            cifra = a % 10;
            a = a / 10;       
        }
        v[cifra]++;
    }
       
      
    // construim cel mai mic nr cu primele cifre ale nr. introduse
    x = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < v[i]; j++){
            x =  x * 10 + i;
        }
    }
    cout << x << endl;
   
    return 0;
}