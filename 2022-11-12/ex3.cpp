 #include <iostream>
using namespace std;

/**
 * Se citesc din fişierul text medii.in numărul de elemente n ( n< 40) 
 * şi apoi cele n medii la informatică ale unei clase de elevi a1, a2, an. 
 
 * Să se scrie în fişierul medii.out:
 * 1. Indicii elevilor cu media 10
 * 2. Numărul de elevi corigenţi (cu media < 5)
 * 3. Media clasei
 * 4. Media cea mai mică şi media cea mai mare din clasă
 */

int main() {

    float m[40] = {10, 9.75, 9.5, 10, 10, 8.65, 8.43, 4.32, 4.75, 5.45};
    int n = 10;
    int c;
    float suma;
    float minim, maxim;

    c = 0;
    suma = 0;
    maxim = 0;

    cout << "elevii cu media 10 sunt: ";
    for (int i = 0; i < n; i++) {
        if (m[i] == 10){
            cout << i+1 << " ";
        }

        if (m[i] < 5) {
            c++;
        }

        suma = suma + m[i];

        if (i == 0) {
            minim = m[i];
        }

        if (m[i] < minim) {
            minim = m[i];
        }

        if (m[i] > maxim) {
            maxim = m[i];
        }
    }
    cout << endl;
    cout << "avem " << c << " elevi corigenti" << endl;
    cout << "media clasei este: " << suma/n << endl;
    cout << "cea mai mica medie este: " << minim << " si cea mai mare medie este: " << maxim << endl;

    return 0;
}