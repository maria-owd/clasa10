 #include <iostream>
using namespace std;

/**
    Citiți și afișați un vector ca în exemplul de mai sus, apoi realizați următoarele:
        a) Calculați și afișați suma tuturor elementelor din vector;
        b) Calculați, pentru fiecare element strict pozitiv din vector, 
            care este suma cifrelor sale, apoi afișați pe ecran
            fiecare astfel de elemen urmat de suma cifrelor sale.
    De exemplu, pentru vectorul din exemplul precedent se va afișa pe ecran:
        a) Suma elementelor vectorului este: 4415
        b) 12 3
           2 2
          4597 25
 */

int main() {

    int v[20], n, suma, cifra, sumaCifre, x;

    cout << "Introduceti nr de spatii: ";
    cin >> n;

    suma = 0;

    cout << "Introduceti elementele vectorului: " << endl;
    for (int i=0; i < n; i++){
        cout << "v[" << i << "] = ";
        cin >> v[i];
        suma = suma + v[i];
    }
    cout << "Suma elementelor vectorului este: " << suma << endl;
    
    for (int i=0; i < n; i++){

        if (v[i] > 0){
            x = v[i];

            sumaCifre = 0;
            while (x != 0){
                cifra = x % 10;
                x = x / 10;
                sumaCifre = sumaCifre + cifra;
            }

            cout << v[i] << " " << sumaCifre << endl;
        }
    }
   



    return 0;
}