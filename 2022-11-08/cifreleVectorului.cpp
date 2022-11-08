 #include <iostream>
using namespace std;

/**
 * Se citeste un nr nat n.
 * afisati cel mai mic nr care poate fi scris folosind toate cifrele lui n.
 */

int main() {

    int v[10] = {0,0,0,0,0,0,0,0,0,0};
    int n, cifra, x;

    cout << "Alege un nr = ";
    cin >> n;

    // numaram aparitia cifrelor
    while (n != 0) {
        cifra = n % 10;
        n = n / 10;
        v[cifra]++;
    }
    
    // construim cel mai mic nr cu cifrele lui n
    x = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < v[i]; j++){
            x =  x * 10 + i;
        }
    }
    cout << x << endl;
    
    return 0;
}