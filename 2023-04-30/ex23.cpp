#include <iostream>
#include <fstream>
#include <iomanip>

/*
    triunghiulara superior
*/
using namespace std;
int main () {

    int a[100][100];
    int n, produs;
    bool minim;
    
    ifstream f("date23.in");
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

    produs = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i+j == n-1) {
                minim = true;
                for (int l = 0; l < n; l++) {
                    if (i != l) {
                        if (a[l][j] < a[i][j]) {
                            minim = false;
                        }
                    }
                }
                if (minim) {
                    produs = produs * a[i][j];
                }
            }
        }
    }
   
    cout << "produsul: " << produs << endl;

    return 0;
}