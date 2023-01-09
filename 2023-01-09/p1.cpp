#include <iostream>
using namespace std;

/**
 * Sa se gaseasca cel mai mare divizor comun 
 * și cel mai mic multiplu comun a unui sir citit de la tastatura.
 */

int main () {
    int v[3] = {60, 12, 42};
    int n = 3;
    int minim, contor;

    minim = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < minim) {
            minim = v[i];
        }
    }

    /************** CMMDC **********/
    int a,b;
    a = v[0];

    for (int i = 1; i < n; i++) {
        // a -> initializat, sau precedentul cmmmdc
        b = v[i];
    
        while( a != b ){
            // cmmdc(0,x) = x
            if (a == 0) { 
                a = b; 
            }
            if (b == 0) {
                b = a;
            }
            // algoritmul lui euclid pt. cmmdc
            if (a > b){
                a = a-b;
            } 
            if (b > a) {
                b = b-a;
            }
        }
        // a => cmmmdc partial
    }

    cout << "cmmdc = " << a << endl;

    /******* CMMMC ******/

    int cmmmc = v[0];

    for (int i = 1; i < n; i++) {
        a = cmmmc;
        b = v[i];
    
        while( a != b ){
            // cmmdc(0,x) = x
            if (a == 0) { 
                a = b; 
            }
            if (b == 0) {
                b = a;
            }
            // algoritmul lui euclid pt. cmmdc
            if (a > b){
                a = a-b;
            } 
            if (b > a) {
                b = b-a;
            }
        }
        // a => cmmmdc partial
        // cmmmc = (a*b) / cmmdc
        cmmmc = cmmmc * v[i] / a;
    }

    cout << "cmmmc = " << cmmmc << endl;
}