/**
 * se citesc n numere naturale
 * sa se calculeze suma numerelor prime si cifra maxima din toate numerele introduse 
 */

 #include <iostream>
using namespace std;

int main() {

    int n, a, copieA, nrDivizori, sumaPrime, cifra, maxim;

    cout << "cate nr citesti: ";
    cin >> n;

    sumaPrime = 0;
     maxim = 0;

    while (n != 0){
        cout << "a=";
        cin >> a;
        copieA = a;

        while (a != 0){
            cifra = a%10;
            a = a/10;

            if (cifra > maxim) {
                maxim = cifra;
            }
        }

        nrDivizori = 0;

        for (int i=2; i <= copieA/2; i++){
            if (copieA % i == 0){
                nrDivizori++;
            }
        }
        
        if (nrDivizori == 0){
            sumaPrime = sumaPrime + copieA;
        }
        n--;
    }
    cout << "suma nr prime e: " << sumaPrime << endl;
    cout << "cifra maxima e: " << maxim << endl;
}
