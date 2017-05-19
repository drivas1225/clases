#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <sstream>
#include <iostream>

using namespace std;


class Car:public Vehicle
{
    public:
        Car();
        Car(const string &myLicense, const int myYear,const string & myStyle);
        const string getDesc();
        const string &getStyle(){return style;}
        virtual ~Car();
    protected:
    private:
        string style;
};

#endif // CAR_H
