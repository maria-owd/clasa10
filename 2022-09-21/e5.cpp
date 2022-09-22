
// Numerele prietene sunt perechile de numere 
// în care fiecare număr în parte este suma divizorilor celuilalt număr. (toți divizorii proprii și 1)
// Primele seturi de numere prietene sunt (220, 284), (1184, 1210), (2620, 2924), (5020, 5564), (6232, 6368).

#include <iostream>
using namespace std;

int main() {


    int a, b, s1, s2;

    cout << "Alege un numar: ";
    cin >> a;

    cout << "Mai alege un numar: ";
    cin >> b;

    s1 = 1;
    s2 = 1;

    for (int i=2; i <= a/2; i++){
        if (a % i == 0){
            s1 = s1 + i;
        }
    }

    for (int j=2; j <= b/2; j++){
        if (b % j == 0){
            s2 = s2 + j;
        }
    }

    if (a == s2 || b == s1) {
        cout << "prietene" << endl;
    } else {
        cout << "dusmani" << endl;
    }

    return 0;

}




