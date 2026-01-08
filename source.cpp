#include<iostream>
#include "fraction.h"
using namespace std;

int main(){

    Fraction a(4,5);
    Fraction b(5,6);

    cout << "Fraction A: " << a.getnumerator() << "/" << a.getdenominator() << endl;
    cout << "Fraction B: " << b.getnumerator() << "/" << b.getdenominator() << endl;


    return 0;
}

