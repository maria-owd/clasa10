#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**
 * Calculati suma elemntelor situate pe conturul matricii.
 */

int main () {
    int a[100][100];
    int m = 10, n = 7;
    long suma;

    ifstream f("date4.in");
    
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
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    suma = 0;
    
    for (int j = 0; j < n; j++) {
        suma = suma + a[0][j] + a[m-1][j];
    }

    for (int i = 1; i < m-1; i++) {
        suma = suma + a[i][0] + a[i][n-1];
    }

    cout << "suma elemntelor de pe contur este: " << suma << endl;
    
    return 0;
}