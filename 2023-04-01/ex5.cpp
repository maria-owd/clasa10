#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**
 * Inversati liniile (prima cu ultima; 2 cu 3).
 */

int main () {
    int a[50][50];
    int m = 4, n = 3;
    int aux;

    ifstream f("date5.in");
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < m/2; i++) {
        for (int j = 0; j < n; j++) {
            aux = a[i][j];
            a[i][j] = a[m-1-i][j];
            a[m-1-i][j] = aux;
        }
    } 

    cout << "noua matrice este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}