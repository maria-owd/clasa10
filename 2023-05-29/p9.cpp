#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/** 
 * 9. Se consideră o matrice pătratică cu n linii care conţine date de tip integer. 
 * Să se alcătuiască un program C++ care afişează pe ecran, pe o singură linie, 
 * suma elementelor pare de pe fiecare coloană.
 */
int main()
{
    int a[100][100];
    int s[100]; // pastram sumele intr-un vector
    int n;

    ifstream f("date9.in");
    f >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            f >> a[i][j];
        }
    }

    cout << "matricea este: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // calcul sume pe coloane
    for (int j = 0; j < n; j++) {
        s[j] = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] % 2 == 0) {
                s[j] = s[j] + a[i][j];
            }
        }
    }
    
    // afisare
    cout << "sumele elementelor pare de pe fiecare coloana sunt: " << endl;
    for (int j = 0; j < n; j++) {
        cout << setw(4) << s[j] << " ";     
    }
    cout << endl;

    return 0;
}
