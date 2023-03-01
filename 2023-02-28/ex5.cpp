#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[4][3];
    int m = 4, n = 3;
    int suma;
    int v[4], minim, l;

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
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        suma = 0;
        for (int j = 0; j < n; j++) {
            suma = suma + a[i][j];
        }
        v[i] = suma;
    }
    
    minim = v[0];
    l = 0;
    for (int i = 0; i < m; i++) {
        if (v[i] < minim) {
            minim = v[i];
            l = i;
        }
    }
    cout << "suma minima e " << minim << " de pe linia: " << l << endl;

    for (int i = l; i < m-1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m = m-1;

    cout << "noua matrice este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}