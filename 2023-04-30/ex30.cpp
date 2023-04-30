#include <iostream>
#include <fstream>
#include <iomanip>

/*
media aritmetica a elementelor poz de peste dp
si media aritmetica a elementelor poz de sub dp
si diferenta m1-m2.
*/
using namespace std;
int main () {

    int a[100][100];
    int n, nr1, nr2;
    float suma1, suma2, m1, m2;
    
    ifstream f("date30.in");
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
    suma1 = 0;
    suma2 = 0;
    nr1 = 0;
    nr2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && a[i][j] > 0) {
                nr1++;
                suma1 = suma1 + a[i][j];
            } 
            if (i > j && a[i][j] > 0) {
                nr2++;
                suma2 = suma2 + a[i][j];
            }
        }
    }

    m1 = suma1/nr1;
    m2 = suma2/nr2;

    cout << m1-m2 << endl;

    return 0;
}
