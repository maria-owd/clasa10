#include <iostream>
#include <fstream>
#include <iomanip>

/*
    Afisati elemntele care sunt strict mai mici ca toti vecinii.
*/
using namespace std;
int main () {

    int a[100][100];
    int m, n;
    int minim, l, c;

    ifstream f("date10.in");
    f >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw (3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    minim = a[0][0];
    l = 0;
    c = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
                l = i;
                c = j;
            }
        }
    }
    
    //eliminare linie
    for (int i = l; i < m-1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m--;

    // eliminare coloana
    for (int j = c; j < n-1; j++) {
        for (int i = 0; i < m; i++) {
            a[i][j] = a[i][j+1];
        }
    }
    n--;

    cout << "noua matrice este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw (3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}