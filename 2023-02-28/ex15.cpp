#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[5][3];
    int m = 5, n = 3;
    bool comp;
    
    ifstream f("date15.in");
    
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

    for (int i = 0; i < m-1; i++) {
        for (int k = i+1; k < m; k++) {
            comp = true;
            for (int j = 0; j < n; j++) {
                if (a[i][j] + a[k][j] != 1) {
                    comp = false;
                }
            }
            if (comp) {
                cout << "(" << i+1 << "," << k+1 << ") ";
            }
        }
    }
    cout << endl;


    return 0;
}