#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[3][4];
    int m = 3, n = 4;
    int minim, maxim;
    int iMin, iMax, jMin, jMax;

    ifstream f("date12.in");
    
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

    minim = a[0][0];
    maxim = a[0][0];
    iMin = 0;
    iMax = 0;
    jMin = 0;
    jMax = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j]; 
                iMin = i;
                jMin = j;
            }
        }
    }

    for (int i = iMin; i < m-1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m--;

    for (int j = jMin; j < n-1; j++) {
        for (int i = 0; i < m; i++) {
            a[i][j] = a[i][j+1];
        }
    }
    n--;

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > maxim) {
                maxim = a[i][j];
                iMax = i;
                jMax = j;
            }
        }
    }

    for (int i = iMax; i < m-1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m--;

    for (int j = jMax; j < n-1; j++) {
        for (int i = 0; i < m; i++) {
            a[i][j] = a[i][j+1];
        }
    }
    n--;

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}