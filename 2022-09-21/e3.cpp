
/**
 * se citeste un nr M, apoi
 * se citesc N numere naturale de la tastatura
 * se se afiseze media aritmetica a numerelor care au cel mai mare divizor divizibil cu M
 */

 #include <iostream>
using namespace std;

int main() {

    int M, N, a, maxim, suma, nrPrime;

    cout << "M=";
    cin >> M;

    cout << "cate nr citesti: ";
    cin >> N;

    suma = 0;
    nrPrime = 0;

    while (N != 0){
        cout << "a=";
        cin >> a;

        maxim = 0;
        for (int i=2; i<=a/2; i++){
            if (a % i == 0){
                if (i > maxim){
                    maxim = i;
                }
            }
        }

        cout << "\tcmmd: " << maxim << endl;
        if (maxim % M == 0){
            nrPrime++;
            suma = suma + a;
        }

        N--;
    }

    cout << suma / nrPrime << endl;

    return 0;
}