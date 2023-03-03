#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[3][4];
    int m = 3, n = 4;
    int suma;
    int v[4], maxim, c;

    ifstream f("date6.in");
    
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

    for (int j = 0; j < n; j++) {
        suma = 0;
        for (int i = 0; i < m; i++) {
            suma = suma + a[i][j];
        }
        v[j] = suma;
    }
    
    maxim = v[0];
    c = 0;
    for (int j = 0; j < n; j++) {
        if (v[j] > maxim) {
            maxim = v[j];
            c = j;
        }
    }
    cout << "suma maxima e " << maxim << " de pe coloana: " << c+1 << endl;

    for (int j = c; j < n-1; j++) {
        for (int i = 0; i < m; i++) {
            a[i][j] = a[i][j+1];
        }
    }
    n = n-1;

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