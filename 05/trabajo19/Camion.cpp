#include "Camion.h"

Camion::Camion()
{
    //ctor
}

Camion::Camion(const string &myLicense, const int myYear,const string & myStyle, const int myEjes): Vehicle ( myLicense , myYear ), style ( myStyle ),ejes(myEjes)
{

}

string Camion::getDesc()
{
    stringstream ss;
    ss<<year;
    stringstream ss1;
    ss1<<ejes;

    return ss.str() + " " + style + ": " + license+" Nuemro de ejes:"+ss1.str();
}



Camion::~Camion()
{
    //dtor
}
