#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**
 * Afisati primul patrat concentric.
 */

int main () {
    int a[23][23];
    int n = 5;
    
    ifstream f("date6.in");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << a[0][j] << " ";
    }

    for (int i = 1; i < n; i++) {
        cout << a[i][n-1] << " ";
    }

    for (int j = n-2; j >= 0; j--) {
        cout << a[n-1][j] << " ";
    }

    for (int i = n-2; i >=1; i--) {
        cout << a[i][0] << " ";
    }
    cout << endl;

    return 0;
}