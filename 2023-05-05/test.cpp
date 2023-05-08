
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // citire //...
    int n = 5;
    int a[5][5] = { { 1, 0, -3, 4, 11 }, { 2, 9, 5, 16, 100 }, { 4, 14, -11, 25, -6 }, { 808, 7, 0, 0, -34 }, { 14, 6, 45, -3, -56 } };
    int k;

    // afisare
    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "k="; 
    cin >> k;

    // validare k
    if (k < 0 || k >= n) {
        cout << "k invalid " << endl;
        return 1;
    }

    // parsare coloana k
    int produs = 1;
    bool exista = false;
    for (int i = 0; i < n; i++) {
        if (a[i][k] > 0) {
            produs = produs * a[i][k];
            exista = true;
        }
    }
    if (exista) {
        int primaCifra = produs % 10;
        int cifra = 0;
        while (produs > 0) {
            cifra = produs % 10;
            produs = produs / 10;
        }
        int ultimaCifra = cifra;
        // dupa while ramanem cu ultima cifra
        float media = (primaCifra + ultimaCifra) / 2.0;
        cout << "media: " << media << endl;
    } else {
        cout << "nu exista elemente pozitive" << endl;
    }
    
    int minim = a[0][1];
    for (int i = 0; i < n / 2; i++) {
        for (int j = i + 1; j < n - 1 - i; j++) {
            if (a[i][j] < minim) {
                minim = a[i][j];
            }
        }
    }
    cout << "minim:" << minim << endl;

    return 0;
}