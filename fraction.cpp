#include<iostream>
#include "fraction.h"
using namespace std;

Fraction:: Fraction(){
    num = 0;
    denom = 1;
}

Fraction:: Fraction(int n){
    num = n;
    denom = 1;
}

Fraction:: Fraction(int n, int d){
    num = n;
    denom = d;
}