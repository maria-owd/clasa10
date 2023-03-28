#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
    int a[30][30];
    int n = 4, m = 4;
    int minim;

    ifstream f("date1.in");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < m; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < m; j++) {
        minim = a[0][j];
        for (int i = 0; i < n; i++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
            }
        }
        cout << minim << " ";
    }
    cout << endl;

    return 0;
}