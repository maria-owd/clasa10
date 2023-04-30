#include <iostream>
#include <fstream>
#include <iomanip>

/*
elementele de pe diag sunt 4, restu 3
*/
using namespace std;
int main () {

    int a[100][100];
    int n = 5;
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                a[i][j] = 4;
            } else if (i+j == n-1) {
                a[i][j] = 4;
            } else a[i][j] = 3;
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

    return 0;
}