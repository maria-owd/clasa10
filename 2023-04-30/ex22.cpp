#include <iostream>
#include <fstream>
#include <iomanip>

/*
    triunghiulara superior
*/
using namespace std;
int main () {

    int a[100][100];
    int n;
    bool nul;

    ifstream f("date22.in");
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

    nul = true;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] != 0) {
                nul = false;
            }
        }
    }
    if (nul) {
        cout << "Este";
    } else {
        cout << "Nu este";  
    }
    cout << " triunghiulara superior" << endl;
    return 0;
}