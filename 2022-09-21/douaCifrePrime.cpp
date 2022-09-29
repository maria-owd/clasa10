#include <iostream>
using namespace std;
int main () {
    int n,a, u,z, prime;
    cout << "n=";
    cin >> n;
    prime = 0;
    while (n > 0) {
        cout << "a:";
        cin >> a;

        if (a >= 10 && a <= 99) {
            u = a % 10;     // cifra unitatilor
            z = (a / 10) % 10;  // cifra zecilor

            if ( (u==2 || u==3 || u==5 || u==7) && (z==2 || z==3 || z==5 || z==7) ) {
                prime = prime + 1;
            }
        }

        n--;
    }
    if (prime > 0) {
        cout << prime << endl;
    } else {
        cout << "nu exista" << endl;
    }
    return 0;
}