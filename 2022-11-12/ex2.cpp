 #include <iostream>
using namespace std;

/**
 * Ionel s-a documentat şi a făcut o listă cu 
 * preturile ultimelor n smartphone-uri apărute 
 * şi altă listă cu preţurile celor mai vândute m tablete. 
 
 * Ajutaţi-l să determine cel mai scump smartphone 
 * şi cea mai ieftină tabletă. 
 * Dacă sunt mai multe, sa afişeze toate poziţiile din listele corespunzătoare.
 */

int main() {

    int s[100];
    int t[100];
    int n, m, maxim, minim;

    cout << "cate telefoane sunt: ";
    cin >> n;

    maxim = 0;
    for (int i = 0; i < n; i++) {
        cout << "pretul telefonului " << i+1 << " este: ";
        cin >> s[i];

        if (s[i] > maxim) {
            maxim = s[i];
        }
    }
    cout << "cel mai scump telefon e: " << maxim << endl;
    
    cout << "telefoanele cele mai scumpe sunt pe pozitiile: ";
    for (int i = 0; i < n; i++) {
        if (s[i] == maxim) {
            cout << i+1 << " ";
        }
    }
    cout << endl;

    cout << "cate tablete sunt: ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        cout << "pretul tabletei " << i+1 << " este: ";
        cin >> t[i];

        if (i == 0) {
            minim = t[i];
        }

        if (t[i] < minim) {
            minim = t[i];
        }
    }

    cout << "cea mai ieftina tableta e: " << minim << endl;
    
    cout << "tabletele cele mai ieftine sunt pe pozitiile: ";
    for (int i = 0; i < m; i++) {
        if (t[i] == minim) {
            cout << i+1 << " ";
        }
    }
    cout << endl;

    return 0;
}