#ifndef CAMION_H
#define CAMION_H
#include "Vehicle.h"
#include <sstream>
#include <iostream>

using namespace std;


class Camion : public Vehicle
{
    public:
        Camion();
        Camion(const string &myLicense, const int myYear,const string & myStyle);
        const string getDesc();
        const string &getStyle(){return style;}
        virtual ~Camion();
    protected:
    private:
        string style;
};

#endif // CAMION_H
