#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

using namespace std;


class Complejo
{
    public:
        Complejo();
        Complejo(double a, double b);
        void print();
        Complejo suma(Complejo a);
        Complejo p_escalar(double r);
        Complejo mult(Complejo a);
        void igual(Complejo a);
        virtual ~Complejo();
    protected:
    private:
        double real;
        double im;
};

#endif // COMPLEJO_H
