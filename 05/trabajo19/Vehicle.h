#ifndef VEHICLE_H
#define VEHICLE_H
#include <string.h>
#include <iostream>

using namespace std;


class Vehicle
{
    public:
        Vehicle();
        Vehicle(const string & myLicense, const int myYear);
        virtual string getDesc();
        const string &getLicense() const {return license;}
        const int getYear()const {return year;}
        virtual ~Vehicle();
    protected:
        string license;
        int year;
    private:
};

#endif // VEHICLE_H
