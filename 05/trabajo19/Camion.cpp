#include "Camion.h"

Camion::Camion()
{
    //ctor
}

Camion::Camion(const string &myLicense, const int myYear,const string & myStyle): Vehicle ( myLicense , myYear ), style ( myStyle )
{

}

const string Camion::getDesc()
{
    stringstream ss;
    ss<<year;
    return ss.str() + " " + style + ": " + license;
}



Camion::~Camion()
{
    //dtor
}
