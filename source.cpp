#include<iostream>
#include "fraction.h"
using namespace std;

int main(){

    Fraction a(4,5);
    Fraction b(5,6);

    a.output();

    (a+b).output();
    (a-b).output();
    (a*b).output();
    (a/b).output(); 

    ++a;
    a.output();

    if(a==b){
        cout << "Fractions are equal" << endl;
    } else {
        cout << "Fractions are not equal" << endl;  
    }

    return 0;
}

