#include <fstream>
#include <iomanip>
#include <iostream>

/*
elimina linii pare
*/
using namespace std;
int main()
{

    int a[100][100];
    int m, n;

    ifstream f("date36.in");
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
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int l = 0; l < m; l += 2) {
        for (int i = l; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = a[i + 1][j];
            }
        }
        m--;
        l--;
    }

    cout << "noua matrice este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}