#include "Complejo.h"

Complejo::Complejo()
{
    //ctor
}

Complejo::Complejo(double a, double b)
{
    real= a;
    im=b;
}

void Complejo::print()
{
    cout<<"("<<real<<","<<im<<")"<<endl;
}

Complejo Complejo::suma(Complejo a)
{
    Complejo res(real+a.real,im+a.im);
    return res;
}

Complejo Complejo::p_escalar(double r)
{
    Complejo res(real*r,im*r);
    return res;
}

Complejo Complejo::mult(Complejo a)
{
    Complejo res(real*a.real-im*a.im,real*a.real+im*a.im);
    return res;
}

void Complejo::igual(Complejo a)
{
    real = a.real;
    im = a.im;

}

Complejo::~Complejo()
{
    //dtor
}
