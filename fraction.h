#ifndef RECTANGLE_H
#define RECTANGLE_H

class Fraction {

    public:
        Fraction();         //Constructors
        Fraction(int n);
        Fraction(int n, int d);

        void setnumerator(int n);    //Mutators
        void setdenominator(int d);

        int getnumerator() const;       //Accessors
        int getdenominator() const;

        


    private:
        int num;
        int denom;
};


#endif // RECTANGLE_H