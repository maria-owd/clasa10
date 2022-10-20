 #include <iostream>
using namespace std;

/**
 * Ordonati elementele vectorului in ordine crescatoare
 */

int main (){

    int v[50], n, t, p, q;

    cout << "cate nr cititi: ";
    cin >> n;

    for (int i=0; i<n; i++){
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    cout << "p = ";
    cin >> p;
    cout << "q = ";
    cin >> q;

    cout << "elementele vectorului sunt: ";
    for (int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = p; i <= q-1; i++){
        for (int j = i + 1; j <= q; j++){
            if (v[i] < v[j]){
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
        
    }
    
    cout << "vectorul ordonat descrescator, intre pozitia " << p << " si " << q << " este: ";
    for (int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;


    return 0;
}