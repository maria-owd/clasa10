#include <iostream>
#include <fstream>
#include <iomanip>

/*
    Afisati elemntele care sunt strict mai mici ca toti vecinii.
*/
using namespace std;
int main () {

    int a[100][100];
    int n;
    bool mic;

    ifstream f("date9.in");
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
            cout << setw (2) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mic = true;
            if (i > 0) { 
                if (a[i][j] >= a[i-1][j]) {
                    mic = false;
                }
            }
            if (j < n-1) {
                if (a[i][j] >= a[i][j+1]) {
                    mic = false;
                }
            }
            if (i < n-1) {
                if (a[i][j] >= a[i+1][j])
                mic = false;
            }
            if (j > 0) {
                if (a[i][j] >= a[i][j-1]) {
                    mic = false;
                }
            }

            if (mic) {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
    
    return 0;
}