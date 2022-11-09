 #include <iostream>
using namespace std;

/**
 * Cititi un numar nr
 * afisati in ordine crescatoare cifrele care apar in numar, impreuna cu numarul aparitiilor
 * cate cifre pare si cate cifre impare are numarul
 * afisati o singura data
 *  toate cifrele continute, in ordinea descrescatoare a valorii lor 
 */

int main() {

    int f[10] = {0};
    int n = 767135673;
    int c, pare, impare;

    while (n != 0){
        c = n % 10;
        f[c]++;
        n = n / 10;
    }

    pare = 0;
    impare = 0;

    for (int i = 0; i < 10; i++) {
        if (f[i] != 0){
            cout << "cifra " << i << " apritii: " << f[i] << endl;
        }

        if (i % 2 == 0){
            pare = pare + f[i];
        } else {
            impare = impare + f[i];
        }
    }

    cout << "avem " << pare << " cifre pare" << endl;
    cout << "avem " << impare << " cifre impare" << endl;

    for (int i = 9; i >= 0; i--){
        if (f[i] > 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}