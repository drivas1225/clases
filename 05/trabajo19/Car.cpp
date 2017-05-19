#include "Car.h"

Car::Car()
{
    //ctor
}

Car::Car(const string &myLicense, const int myYear,const string & myStyle): Vehicle ( myLicense , myYear ), style ( myStyle )
{

}

const string Car::getDesc()
{
    stringstream ss;
    ss<<year;
    return ss.str() + " " + style + ": " + license;
}

Car::~Car()
{
    //dtor
}
