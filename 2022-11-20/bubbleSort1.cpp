#include <iostream>
using namespace std;
int main (){

    int v[10] = {7, 3, 0, 9, 1, 4, 8, 5, 2, 6};
    int n = 10;
    int t, m;

    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        m = 0;

        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
                m++;
            }
        }

        cout << m << ":\t";

        for (int k = 0; k < n; k++){
            cout << v[k] << " ";
        }
        cout << endl;
        

        if (m == 0) {
            break;
        }
    }

    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}