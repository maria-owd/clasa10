#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**
 * Prima coloana cu numar maxim de 1.
 */

int main () {
    int a[50][50];
    int m = 5, n = 4;
    int maxim, c, suma;

    ifstream f("date7.in");
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    cout << "   ";
    for (int j = 0; j < n; j++) {
        cout << setw(3) << j+1 << " ";
    }
    cout << endl;
    cout << "   ";
    for (int j = 0; j < n; j++) {
        cout <<  "----";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    maxim = 0;
    c = 0;
    for (int j = 0; j < n; j++) {
        suma = 0;
        for (int i = 0; i < m; i++) {
            suma = suma + a[i][j];
        }

        if (suma > maxim) {
            maxim = suma;
            c = j;
        }
    }
    cout << c+1 << endl;


    return 0;
}