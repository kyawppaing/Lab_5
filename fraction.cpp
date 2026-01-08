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

Fraction operator +(Fraction f1, Fraction f2){
    return Fraction( (f1.num * f2.denom) + (f2.num * f1.denom), f1.denom * f2.denom );
}

Fraction operator -(Fraction f1, Fraction f2){
    return Fraction( (f1.num * f2.denom) - (f2.num * f1.denom), f1.denom * f2.denom );
}

Fraction operator *(Fraction f1, Fraction f2){
    return Fraction( (f1.num * f2.num), (f1.denom * f2.denom) );
}

Fraction operator /(Fraction f1, Fraction f2){
    return Fraction( (f1.num * f2.denom), (f1.denom * f2.num) );
}

Fraction Fraction:: operator ++(){
    num = num + denom;
    return Fraction(num, denom);
}

Fraction Fraction:: operator --(){
    num = num - denom;
    return Fraction(num, denom);
}