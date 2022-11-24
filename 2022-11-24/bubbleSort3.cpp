#include <iostream>
using namespace std;
int main (){

    int v[10] = {5, 0, -9, 1, 6, -5, 7, 10, 11, -3};
    int a[10], b[10];
    int n = 10;
    int na, nb;
    int aux, schimbare;

    cout << "elementele vectorului sunt: ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // formam cei doi vectori
    na = 0;
    nb = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= 0) {
            a[na] = v[i];
            na++; 
        } else {
            b[nb] = v[i];
            nb++;
        }
    }

    // sortam primul vector
    
    for (int i = 0; i < na - 1; i++) {
        for (int j = i + 1; j < na; j++) {
            if (a[i] > a[j]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }  
    }

    cout << "primul vector ordonat crescator este: ";
    for (int i = 0; i < na; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // ordonam al doilea vector
    do {
        schimbare = 0;
        for (int i = 0; i < nb-1; i++) {
            if (b[i] < b[i+1]) {
                aux = b[i];
                b[i] = b[i+1];
                b[i+1] = aux;
                schimbare = 1;
            }
        }
    } while (schimbare == 1);

    cout << "vectorul ordonat descrescator este: ";
    for (int i = 0; i < nb; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}