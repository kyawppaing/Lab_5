#ifndef FRACTION_H
#define FRACTION_H

class Fraction {

    public:
        Fraction();         //Constructors
        Fraction(int n);
        Fraction(int n, int d);

        void setnumerator(int n);    //Mutators
        void setdenominator(int d);

        int getnumerator() const;       //Accessors
        int getdenominator() const;

        void output();

        //Basic Operators
        friend Fraction operator +(Fraction f1, Fraction f2);
        friend Fraction operator -(Fraction f1, Fraction f2);
        friend Fraction operator *(Fraction f1, Fraction f2);
        friend Fraction operator /(Fraction f1, Fraction f2);

        Fraction operator ++();
        Fraction operator --();

        friend bool operator ==(Fraction f1, Fraction f2);
        friend bool operator !=(Fraction f1, Fraction f2);
        friend bool operator <(Fraction f1, Fraction f2);
        friend bool operator >(Fraction f1, Fraction f2);
        friend bool operator <=(Fraction f1, Fraction f2);
        friend bool operator >=(Fraction f1, Fraction f2);

    private:
        int num;
        int denom;
};


#endif 