#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
    int a[10][10];
    int m = 3, n = 5;
    int minim;

    ifstream f("date2.in");
    
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

    for (int i = 0; i < m; i++) {
        minim = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
            }
        }
        cout << minim << " ";
    }
    cout << endl;

    return 0;
}