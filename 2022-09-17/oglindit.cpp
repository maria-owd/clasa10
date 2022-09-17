#include <iostream>

using namespace std;

/**
 * Citit n nr nat si afisati-le doar pe acelea care au
 * oglinditul nr par.
 */

int main() {

    int n, a, copieA, oglindit, cifra;

    cout << "Cate nr vrei sa citesti: ";
    cin >> n;

    while (n != 0) {
        cout << "Alege un nr: ";
        cin >> a;
        copieA = a;
        oglindit = 0;

        while (a != 0) {
            cifra = a % 10;
            oglindit = oglindit * 10 + cifra;
            a = a / 10;
        }

        if (oglindit % 2 == 0){
            cout << copieA << endl;
        } 

        n--;
    }

    return 0;
}