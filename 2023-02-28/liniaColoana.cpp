#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[3][4];
    int m = 3, n = 4;
    int l,c;
    int v[3];
    int suma, contor;

    ifstream f("date.in");
    
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
            cout << setw(6) << a[i][j] << " ";
        }
        cout << endl;
    }

    // Ex. 1
    cout << "alege o linie de la 0 la " << m-1 << ": ";
    cin >> l;

    cout << "elemntele liniei sunt: ";
    for (int i = 0; i < n; i++) {
        cout << a[l][i] << " ";
    }
    cout << endl;
    
    // Ex. 2
    cout << "alege o coloana de la 0 la " << n-1 << ": ";
    cin >> c;

    cout << "elemntele coloanei sunt: " << endl;
    for (int i = 0; i < m; i++) {
        cout << a[i][c] << endl;;
    }

    // Ex. 3

    for (int i = 0; i < m; i++) {
        suma = 0;
        for (int j = 0; j < n; j++) {
            suma = suma + a[i][j];
        }
        v[i] = suma;
    }

    contor = 0;
    for (int i = 0; i < m-1; i++) {
        for (int j = i+1; j < m; j++) {
            if (v[i] == v[j]) {
                cout << "liniile " << i << " si " << j << " au sume egale" << endl;
                contor++;
            }
        }
    }

    if (contor == 0) {
        cout << "nu avem linii cu sume egale" << endl;
    }
    
return 0;
}