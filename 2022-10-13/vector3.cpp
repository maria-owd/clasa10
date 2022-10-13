 #include <iostream>
using namespace std;

/**
 * un vector cu nr nat, afisati elementele vectorului
 * media aritmetica a elementelor care
 *      incep si se gata cu aceeasi cifra 
 * primul nr par si pozitia acestuia
 * ultimul nr impar si pozitia acestuia
 * apoi sa se interschimbeschimbe in vector aceste nr.
 * afisati vectorul dupa transpunere 
 */

int main(){

    int v[100], n, a, cifra, primaCifra, ultimaCifra, numere, pozitiePar, pozitieImpar, t;
    float suma;

    cout << "cate elemente contine vectorul: ";
    cin >> n;

    for (int i=0; i < n; i++){
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    cout << "elementele vectorului sunt: ";
    for (int i=0; i < n; i++){
       cout << v[i] << " "; 
    }
    cout << endl;

    suma = 0;
    numere = 0;

    for (int i=0; i < n; i++){
        a = v[i];

        ultimaCifra = 10;

        while (a != 0){
            cifra = a % 10;

            if (ultimaCifra == 10){
                ultimaCifra = cifra;
            }
            a = a / 10;
        }
        primaCifra = cifra;

        if (ultimaCifra == primaCifra){
            numere++;
            suma = suma + v[i];
        }
    }

    if (numere == 0){
        cout << "nu exista nr ce au prima si ultima cifra egale" << endl;
    } else {
        cout << "media este: " << suma/numere << endl;
    }

    pozitiePar = -1;
    pozitieImpar = -1;

    for (int i=0; i < n; i++){
        if (v[i] % 2 == 0 && pozitiePar == -1) {
            pozitiePar = i;
        }

        if (v[i] % 2 != 0){
            pozitieImpar = i;
        }
    }

    if (pozitiePar != -1){
        cout << "primul element par se afla pe pozitia " << pozitiePar << " si este " << v[pozitiePar] << endl;
    } else {
        cout << "nu sunt elemente pare" << endl;
    }

    if (pozitieImpar != -1){
        cout << "ultimul element impar se afla pe pozitia " << pozitieImpar << " si este " << v[pozitieImpar] << endl;
    } else {
        cout << "nu sunt elemente impare" << endl;
    }

    if (pozitiePar != -1 && pozitieImpar != -1){
        t = v[pozitiePar];
        v[pozitiePar] = v[pozitieImpar];
        v[pozitieImpar] = t;

        cout << "elementele vectorului sunt: ";
        for (int i=0; i < n; i++){
            cout << v[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}