 #include <iostream>
using namespace std;

/**
 * 1. Se introduc de la tastatură cel mult 10000 de numere întregi. 
 * Să se afişeze valoarea cea mai mică 
 * şi numărul de ordine (indicele) al elementelor care au valoarea minimă.
 */

int main() {

    int v[10000];
    int n, minim;

    cout << "cate nr cititi: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];

        if (i == 0) {
            minim = v[i];

        }

        if (v[i] < minim) {
            minim = v[i];
        }
    }

    cout << "minim e: " << minim << endl;

    cout << "numarul de ordine este: ";
    for (int i = 0; i < n; i++) {
        if (v[i] == minim) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}