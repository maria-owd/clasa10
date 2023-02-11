#include <iostream>
#include <iomanip>  
#include <fstream>
using namespace std;

int main () {

    int a[6][5];
    int m = 6, n = 5;
    int x, suma;

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

    cout << "alegeti o linie: ";
    cin >> x;

    suma = 0;
    cout << "suma elementelor liniei alese este: ";
    for (int i = 0; i < n; i++) {
        suma = suma + a[x][i];
        if (a[x][i] < 0) {
            cout << "(" << a[x][i] << ")";
        } else {
            cout << a[x][i];
        }

        if (i < n-1) {
            cout << "+";
        }
    }
    cout << " = " << suma << endl;

    return 0;
}
