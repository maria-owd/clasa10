#include <iostream>
#include <fstream>
#include <iomanip>

/*
    produs nr pare de pe dp
*/
using namespace std;
int main () {

    int a[100][100];
    int n, produs;
    bool par;

    ifstream f("date21.in");
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
            cout << setw (3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    produs = 1;
    par = false;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            if (i==j) {
                if (a[i][j] % 2 == 0) {
                    produs = produs * a[i][j];
                    par = true;
                }
            }
        }
    }

    if (par) {
        cout << "produsul nr pare de pe dp: " << produs << endl;
    } else {
        cout << "nu-s nr pare" << endl;
    }

    return 0;
}
