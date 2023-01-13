#include <iostream>
using namespace std;

/**
 * Se citesc elementele unui vector cu n componente, numere întregi.
 * Să se verifice dacă tabloul este ordonat (crescător sau descrescător).
 */ 

int main () {

    int v[5] = {3,4,1,7,5};
    //int v[5] = {1,3,4,5,7};
    //int v[5] = {7, 5, 4, 3, 1};
    int n = 5;
    int c, d;

    c = 0;
    d = 0;

    for (int i = 0; i < n-1; i++) {
        if (v[i] > v[i+1]) {
            c++;
        }

        if (v[i] < v[i+1]) {
            d++;
        }
    }

    if (c == 0) {
        cout << "e crescator" << endl;
    } 

    if (d == 0) {
        cout << "e descrescator" << endl;
    }

    if (c > 0 && d > 0) {
        cout << "buclucas" << endl;
    }

    return 0;
}