#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[5][7];
    int m = 5, n = 7;
    int maxim, nrLinii;
    bool exista, ok;

    ifstream f("date11.in");
    
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
            cout << setw(2) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // a)
    maxim = a[0][0];
    for (int i =0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > maxim) {
                maxim = a[i][j];
            }
        }
    }
    cout << "a) " << maxim << endl;

    // b)
    nrLinii = 0;
    for (int i = 0; i < m; i++) {
        exista = false;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == maxim) {
                exista = true;
            }
        }
        if (exista) {
            nrLinii++;
        }
    }
    cout << "b) " << nrLinii << endl;

    // c)
    for (int i = 0; i < m; i++) {
        ok = true;
        for (int j = 0; j < n-1; j++) {
            if (a[i][j] > a[i][j+1]) {
                ok = false;
            }
        }
        if (ok) {
            cout << "c) ";
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // d)
    cout << "d) ";
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            ok = true;
            for (int k = 0; k < m; k++) {
                if (k != i && a[k][j] == a[i][j]) {
                    ok = false;
                }
            }
            if (ok) {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;

    // e)
    for (int i = m/2; i < m-1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m--;
    
    cout << "e) " << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(2) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}
