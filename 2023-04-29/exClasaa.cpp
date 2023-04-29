#include <iostream>
#include <fstream>
#include <iomanip>

/**
    Din elementele situate pe cele diagonale.
    selectati-le pe cele care au exact trei cifre si, 
    formati un vector care sa le contina.
    Afisati vectorul, 
    apoi afisati media aritmetica a elementelor pe care le contine.
 */
using namespace std;

int main () {
    int a[100][100];
    int v[100];
    int n, pozitie;
    float suma;

    ifstream f("date.in");

    f >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f. close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw (4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    pozitie = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==j) {
                if (a[i][j] >= 100 && a[i][j] <= 999) {
                    v[pozitie] = a[i][j];
                    pozitie++;
                }
            } else {
                if (i+j == n-1) {
                    if (a[i][j] >= 100 && a[i][j] <= 999) {
                        v[pozitie] = a[i][j];
                        pozitie++;
                    }
                }
            }
        }
    }

    suma = 0;
    for (int i = 0; i < pozitie; i++) {
        cout << v[i] << " ";
        suma = suma + v[i];
    }
    cout << endl;

    cout << "media nr din vector: " << suma/pozitie << endl;

    return 0;
}