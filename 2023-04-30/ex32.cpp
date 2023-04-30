#include <iostream>
#include <fstream>
#include <iomanip>

/*
minimul de pe coloane
*/
using namespace std;
int main () {

    int a[100][100];
    int n, minim;
    
    ifstream f("date32.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw (4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int j = 0; j < n; j++) {
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