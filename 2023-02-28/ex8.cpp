#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[4][3];
    int m = 4, n = 3;
    int divi;
    bool toateZero;

    ifstream f("date8.in");
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }
    f.close();

    cout << "matricea este: " << endl;
    for (int i = 0; i < m; i++) {
        cout << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    do {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                divi = 0;

                for (int d = 2; d <= a[i][j] / 2; d++) {
                    if (a[i][j] % d == 0) {
                        divi++;
                    }
                }
                a[i][j] = divi;
            }
        }

        toateZero = true;
        for (int i = 0; i < m; i++) {
            cout << i << ": ";
            for (int j = 0; j < n; j++) {
                cout << setw(6) << a[i][j] << " ";
                if (a[i][j] != 0) {
                    toateZero = false;
                }
            }
            cout << endl;
        }
        cout << endl;
    } while (!toateZero);


    return 0;
}