#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main() {

    int a[3][3];
    int m = 3, n = 3;
    int x, y;

    ifstream f("date10.in");
    
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

    
    for (int j = 0; j < n; j++) {
        int cmmdc = a[0][j];

        for (int i = 1; i < m; i++) {
            x = cmmdc;
            y = a[i][j];
        
            while( x != y ){

                if (x== 0) { 
                    x = y; 
                }
                if (y == 0) {
                    y = x;
                }
                if (x > y){
                    x = x-y;
                } 
                if (y > x) {
                    y = y-x;
                }
            }
            cmmdc = x;
        }
        cout << cmmdc << " ";
    }
    cout << endl;

    return 0;

}