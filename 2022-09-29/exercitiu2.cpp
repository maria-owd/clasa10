 #include <iostream>
using namespace std;

int main (){

    int x, y;

    x = 3;
    y = 9;

    if (x < y){
        x = x - y;
        y = x + y;
        x = y - x;
    }

    while (x >= y){
        cout << "A ";
        x = x - y;

        if (x % 2 == 0){
            cout << "A ";
        } else {
            cout << "B ";
        }
    }
    cout << endl;
    return 0;
}
