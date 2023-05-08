#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
    int a[100][100];
    int n, suma, produs, maxim, nr;
    bool impar;
    float s;

    ifstream f("date.in");
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
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // NORD
    suma = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = i + 1; j < n - 1 - i; j++) {
            suma = suma + a[i][j];
        }
    }
    cout << "suma NORD: " << suma << endl;

    // SUD
    produs = 1;
    impar = false;
    for (int i = n / 2 + 1; i < n; i++) {
        for (int j = n - i; j < i; j++) {
            if (a[i][j] % 2 != 0) {
                produs = produs * a[i][j];
                impar = true;
            }
        }
    }
    if (impar) {
        cout << "produs nr impare SUD: " << produs << endl;
    } else {
        cout << "nu sunt nr impare" << endl;
    }

    // VEST
    nr = 0;
    s = 0;
    for (int j = 0; j < n / 2; j++) {
        for (int i = j + 1; i < n - 1 - j; i++) {
            if (a[i][j] % 2 == 0) {
                s = s + a[i][j];
                nr++;
            }
        }
    }
    if (nr > 0) {
        cout << "media nr pare VEST: " << s / nr << endl;
    } else {
        cout << "nu sunt nr pare" << endl;
    }

    // EST
    maxim = a[1][n - 1];
    for (int j = n / 2 + 1; j < n; j++) {
        for (int i = n - j; i < j; i++) {
            if (a[i][j] > maxim) {
                maxim = a[i][j];
            }
        }
    }
    cout << "maxim EST: " << maxim << endl;

    return 0;
}
