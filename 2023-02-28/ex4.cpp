#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[3][5];
    int m = 3, n = 5;
    int minim;

    ifstream f("date4.in");
    
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

    for (int i = 0; i < m; i++) {
        minim = a[i][0];
        for (int j = 1; j < n; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
            }
        }
        cout << minim << " ";
    }
    cout << endl;

    return 0;
}