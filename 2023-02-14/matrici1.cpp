#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
    int a[3][4];
    int m = 3, n = 4;
    int max;

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

    max = a[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    cout << "maximul este: " << max << " si se afla pe poz: ";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == max) {
                cout << "[" << i << "," << j << "] ";
            }
        }
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        max = a[i][0];

        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        cout << i << ": " << max << endl;
    }
    return 0;
}