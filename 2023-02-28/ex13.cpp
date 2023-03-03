#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[4][4];
    int m = 4, n = 4;
    bool crescator, descrescator;
    
    ifstream f("date13.in");
    
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
    cout << endl;

    for (int i = 0; i < m; i++) {
        crescator = true;
        descrescator = true;
        for (int j = 0; j < n-1; j++) {
            if (a[i][j] >= a[i][j+1]) {
                crescator = false;
            }
            if (a[i][j] <= a[i][j+1]) {
                descrescator = false;
            }
        }
        if (!crescator && !descrescator) {
            for (int k = i; k < m-1; k++) {
                for (int j = 0; j < n; j++) {
                    a[k][j] = a[k+1][j];
                }
            }
            m--;
            i--;
        }
    }

    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(2) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}