#include <iostream>
#include <fstream>
#include <iomanip>

/*
    a[i][j] = minimul dintre i si j
*/
using namespace std;
int main () {

    int a[10][10];
    int m = 4, n = 5;

    for (int i = 1; i <= m; i++) {
        for ( int j = 1; j <= n; j++) {
            if (i < j) {
                a[i][j] = i;
            } else {
                a[i][j] = j;
            }
        }
    }

    cout << "matricea este: " << endl;
    for (int i = 1; i <= m; i++) {
        cout << i << ": ";
        for (int j = 1; j <= n; j++) {
            cout << setw (2) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}