 #include <iostream>
using namespace std;

/**
 * Cititi elementele unui vector cu nr intrgi, max 100 elemente
 * un vector contine toate elementele strict pozitive
 * celalalt vector contine toate elementele strict negative
 * afisati vectorii obtinuti
 * primul e ordonat crescator
 * al oilea e ordonat descrescator
 * afisati dupa ordonare
 */

int main () {
    //int v[100] = {12,4,0,-9,6,-11,3,5,0,-7};     int n = 10; // test
    int v[100], a[100], b[100];
    int n, pa, pb;       // pozitiile din vectorii a si b
    int t;

    cout << "cate elemente contine vectorul: ";
    cin >> n;

    for (int i=0; i<n; i++){
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }
   
    cout << "elementele vectorului sunt: ";
    for (int i=0; i<n; i++){
        cout << v[i] << " ";
       
    }
    cout << endl;

    pa = 0;
    pb = 0;

    for (int i=0; i<n; i++){
        if (v[i] > 0){
            a[pa] = v[i];
            pa++;
        }

        if (v[i] < 0){
            b[pb] = v[i];
            pb++;
        }
    }

    cout << "elementele vectorului pozitiv sunt: ";
    for (int i = 0; i < pa; i++){
        cout << a[i] << " ";    
    }
    cout << endl;

    cout << "elementele vectorului negativ sunt: ";
    for (int i = 0; i < pb; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < pa - 1; i++){
        for (int j = i + 1; j < pa; j++){
            if (a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    cout << "elementele vectorului pozitiv, sortat sunt: ";
    for (int i = 0; i < pa; i++){
        cout << a[i] << " ";    
    }
    cout << endl;

    for (int i = 0; i < pb - 1; i++){
        for (int j = i + 1; j < pb; j++){
            if (b[i] < b[j]){
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    cout << "elementele vectorului negativ, sortat sunt: ";
    for (int i = 0; i < pb; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}