#include <iostream>
using namespace std;

/**
 * Sa se memoreze intr-un tvector primele n numere prime
 */

int main () {

    int v[200];
    int n, x, p, divi;

    cout << "cate elemnte prime doriti: ";
    cin >> n;

    p = 0;
    x = 2;

    while (p < n) {
        divi = 0;

        for (int i = 2; i <= x/2; i++) {
            if (x % i == 0) {
                divi++;
            }
        }

        if (divi == 0) {
            v[p] = x;
            p++;
        }
        x++;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}