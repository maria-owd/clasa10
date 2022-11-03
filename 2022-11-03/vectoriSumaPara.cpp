 #include <iostream>
using namespace std;

/**
 * Cititi v[100], afisati vectorul
 * construiti un vector care sa contina elementele care au suma cifrelor numar par
 * afisati noul vector/ nu exista
 * ordonati vectorul crescator si afisati-l
 */

int main(){

    // int v[10] = {103, 750, 112, 45, 97, 104};
    // int v[10] = {1013, 7510, 1112, 45, 917, 104};  

    int v[100];
    int a[100];
    int n, copie, cifra, suma, pozitie, t;

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

    pozitie = 0;
    for (int i=0; i<n; i++){
        copie = v[i];
        suma = 0;
        while (copie != 0) {
            cifra = copie % 10;
            suma = suma + cifra;
            copie = copie / 10;
        }
        
        if (suma % 2 == 0){
            a[pozitie] = v[i];
            pozitie++;
        }
    }

    if (pozitie > 0) {
        cout << "Noul vector este: ";
        for (int i = 0; i < pozitie; i++){
            cout << a[i] << " " ;
        }
        cout << endl;

        for (int i = 0; i < pozitie - 1; i++){
            for (int j = i + 1; j < pozitie; j++){
                if (a[i] > a[j]){
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }

        cout << "Noul vector, ordonat este: ";
        for (int i = 0; i < pozitie; i++){
            cout << a[i] << " " ;
        }
        cout << endl;
        
    } else {
        cout << "nu exista" << endl;
    }


    return 0;
}