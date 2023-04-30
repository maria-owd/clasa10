#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/*
ANSI escape color codes :

Name            FG  BG
Black           30  40
Red             31  41
Green           32  42
Yellow          33  43
Blue            34  44
Magenta         35  45
Cyan            36  46
White           37  47
Bright Black    90  100
Bright Red      91  101
Bright Green    92  102
Bright Yellow   93  103
Bright Blue     94  104
Bright Magenta  95  105
Bright Cyan     96  106
Bright White    97  107
*/
void white(int x) {
    cout << setw(3) << x << "\033[0m" << " ";
}

void green(int x) {
    cout << "\033[32m" << setw(3)  << x << "\033[0m" << " ";
}

void yellow(int x) {
    cout << "\033[33m" << setw(3) << x << "\033[0m" << " ";
}

int main()
{
    int a[10][10];
    int n;

    ifstream f("date.in");

    // citire
    {
        f >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                f >> a[i][j];
            }
        }
        f.close();
    }

    // afisare
    {
        cout << "matricea este: " << endl;
        cout << "    ";
        for (int j = 0; j < n; j++) {
            cout << setw(2) << j << " ";
        }
        cout << endl;
        cout << "    ";
        for (int j = 0; j < n; j++) {
            cout << "-- ";
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << i << ":  ";
            for (int j = 0; j < n; j++) {
                cout << setw(2) << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    /* Parcurgerea diagonalelor (sub/peste) cu FOR optimizat  */
    cout << "Diagonala principala " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i][i] << " ";
    }
    cout << endl << endl;

    cout << "Diagonala secundara " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i][n - 1 - i] << " ";
    }
    cout << endl << endl;

    cout << "Deasupra Diagonalei Principale " << endl;
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sub Diagonala Principala " << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Deasupra diagonalei secundare" << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sub diagonala secundara" << endl;
    for (int i = 1; i < n; i++) {
        for (int j = n - i; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << endl;
    
    /* Conditii de existenta pe diagonale  */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // diagonala principala
                green(a[i][j]); 
            } else if (i + j == n - 1) { 
                // diagonala secundara
                yellow(a[i][j]); 
            } else {
                // normal
                white(a[i][j]);
            }
        }
        cout << endl;
    }
    cout << endl;

    /* Conditii de existenta sub / peste diagonala principala  */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                // sub diagonala principala
                green(a[i][j]); 
            } else if (i < j) { 
                // PESTE diagonala principala
                yellow(a[i][j]); 
            } else {
                // normal
                white(a[i][j]);
            }
        }
        cout << endl;
    }
    cout << endl;

     /* Conditii de existenta sub / peste diagonala secundara  */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n-1) {
                // SUB diagonala secundara
                green(a[i][j]); 
            } else if (i + j < n-1) { 
                // PESTE diagonala secundara
                yellow(a[i][j]); 
            } else {
                // normal
                white(a[i][j]);
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}