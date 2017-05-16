#include <iostream>
#include "Complejo.h"


using namespace std;

int main()
{
    Complejo p(4,5);
    Complejo c(4,5);
    p.print();
    c.print();
    Complejo res = p.suma(c);
    res.print();
    res=res.p_escalar(5);
    res.print();
    res= res.mult(c);
    res.print();
    res.igual(p);
    res.print();
    return 0;
}
