#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
    int a[50][50];
    int m = 4, n = 4;
    long produs;

    ifstream f("date3.in");
    
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

    produs = 1;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                if (a[i][j] > 0) {
                    produs = produs * a[i][j];
                }
            }
        }
        }
    }
    cout << "produsl elementelor cerute este: " << produs << endl;
    
    return 0;
}