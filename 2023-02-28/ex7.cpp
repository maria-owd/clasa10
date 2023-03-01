#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[4][4];
    int m = 4, n = 4;
    int produs;
    int v[4], maxim;

    ifstream f("date7.in");
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }

    maxim = 0;
    for (int j = 0; j < n; j++) {
        produs = 1;
        for (int i = 0; i < m; i++) {
            produs = produs * a[i][j];
        }

        v[j] = produs;

        if (produs > maxim) {
            maxim = produs;
        }
    }
    
    for (int j = 0; j < n; j++) {
        if (v[j] == maxim) {
            cout << j+1 << " ";
        }
    }
    cout << endl;

    return 0;
}