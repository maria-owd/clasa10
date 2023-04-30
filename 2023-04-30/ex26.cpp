#include <iostream>
#include <fstream>
#include <iomanip>

/*
media aritmetica a elementelor poz de sub dp
*/
using namespace std;
int main () {

    int a[100][100];
    int n, nr;
    float suma;
    
    ifstream f("date26.in");
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

    suma = 0;
    nr = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] > 0) {
                nr++;
                suma = suma + a[i][j];
            }
        }
    }
    cout << "media: " << suma/nr << endl;

    return 0;
}