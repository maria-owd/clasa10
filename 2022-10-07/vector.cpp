 #include <iostream>
using namespace std;

/**
 * Citit si afisati un vector cu nr intregi, maxim 50 numere.
 * calculati si afisati 
 *      media aritmetica a tuturor cifrelor pare din componentele vectorului
 *          sau mesajul "nu exista"
 *      numarul numerelor strict pozitive si strict negative
 *      care e cel mai mare dintre cele 2
 */

int main () {
    int v[50], n, copie, cifra, cifre, pozitive, negative;
    float suma;

    // citirea
    cout << "cate nr citesti: ";
    cin >> n;

    for (int i=0; i < n; i++){
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    // afisare
    cout << "elementele inroduse sunt: ";
    for (int i=0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // media cifrelor pare
    suma = 0;
    cifre = 0;
    for (int i=0; i < n; i++){
        copie = v[i];

        while (copie != 0) {
            cifra = copie % 10;
            copie = copie / 10;

            if (cifra % 2 == 0){
                cifre++;
                suma = suma + cifra;
            }
        }
    }
    if (cifre > 0){
        cout << "Media cifrelor pare este: " << suma / cifre << endl;
    } else {
        cout << "nu exista cifre pare" << endl;
    }

    // numerele pozitive si negative
    pozitive = 0;
    negative = 0;

    for (int i=0; i < n; i++){
        if (v[i] > 0){
            pozitive++;
        } else {
            negative++;
        }
    }
    cout << "avem " << pozitive << " numere pozitive si " << negative << " numere negative" << endl;

    if (pozitive > negative) {
        cout << "avem mai multe nr pozitive" << endl;
    } else if (negative < pozitive) {
        cout << "avem mai multe nr negative" << endl;
    } else {
        cout << "avem numar egale intre numerele pozitive si negative" << endl;
    }
    return 0;
}