#include <iostream>
using namespace std;
int main () {
    int n,x,y,d;
    cout << "n=";
    cin >> n;
    x = 1;
    y = n;
    d = 2;
    while (x < y) {
        if (n % d == 0) {
            x = d;
            y = n / d;
        }
        d = d + 1;
    }
    if (x == y ) {
        cout << "D" << x << endl;
    } else {
        cout << "N";
    }
}