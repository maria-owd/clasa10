 #include <iostream>
using namespace std;
/*
    Se dă un vector cu n elemente, numere naturale distincte. 
    Ordonați crescător elementele situate înaintea valorii maxime din vector 
    și descrescător elementele situate după această valoare.
*/

int main() {

    int v[10] = {71,52,37,16,63,98,24,49,82,73};
    int n = 10;
    int pMaxim, t;

    pMaxim = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > v[pMaxim]){
            pMaxim = i;
        }
    }

    for (int i = 0; i < pMaxim - 1; i++){
        for (int j = i + 1; j < pMaxim; j++) {
            if (v[i] > v[j]){
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }

    for (int i = pMaxim; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (v[i] < v[j]) {
                t = v[i];
                v[i] = v[j];
                v[j] = t; 
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
