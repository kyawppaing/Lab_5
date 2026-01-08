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

void Fraction:: setnumerator(int n){
    num = n;
}

void Fraction:: setdenominator(int d){
    denom = d;
}

int Fraction:: getnumerator() const{
    return num;
}

int Fraction:: getdenominator() const{
    return denom;
}

void Fraction:: output(){
    cout << num << "/" << denom << endl;
}