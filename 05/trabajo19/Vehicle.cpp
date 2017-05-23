#include "Vehicle.h"
#include <sstream>

Vehicle::Vehicle()
{
    //ctor
}

Vehicle::Vehicle(const string & myLicense, const int myYear)
{
    license = myLicense;
    year=myYear;
}

string Vehicle::getDesc()
{
    stringstream ss;
    ss<<year;

    return license + " from " + ss.str();
}

Vehicle::~Vehicle()
{
    //dtor
}
