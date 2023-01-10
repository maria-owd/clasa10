#include <iostream>
using namespace std;

/**
 * Sa se numere cate elemente sunt egale cu 
 * media aritmetica a vecinilor sai
 */

int main () {

    int v[6] = {3, 6, 9, 18, 13, 8};
    int n = 6;
    int contor;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    contor = 0;
    for (int i = 1; i < n-1; i++) {
        if (v[i] == (v[i-1] + v[i+1])/2) {
            contor++;
        }
    }

    cout << "avem " << contor << " elemnte corespunzatoare" << endl;

    return 0;
}