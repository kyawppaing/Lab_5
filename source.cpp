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


    return 0;
}

