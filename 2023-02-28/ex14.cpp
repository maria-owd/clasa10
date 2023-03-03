#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[3][4];
    int m = 3, n = 4;
    int minim, lMin, maxim, lMax;
    int t;
    
    ifstream f("date14.in");
    
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
    cout << endl;

    minim = a[0][0];
    maxim = a[0][0];
    lMin = 0;
    lMax = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
                lMin = i;
            }
            if (a[i][j] > maxim) {
                maxim = a[i][j];
                lMax = i;
            }
        }
    }
    cout << "a) " << minim << " pe linia " << lMin+1 << endl;
    cout << "b) " << maxim << " pe linia " << lMax+1 << endl;

    if (lMin != lMax) {
        for (int j = 0; j < n; j++) {
            t = a[lMin][j];
            a[lMin][j] = a[lMax][j];
            a[lMax][j] = t;
        }
    } else {
        cout << "minimul si maximul sunt pe aceeasi linie" << endl;
    }

    cout << "c) " << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


return 0;
}