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
        Camion(const string &myLicense, const int myYear,const string & myStyle,const int myEjes);
        virtual string getDesc();
        const string &getStyle(){return style;}
        const int getEjes(){return ejes;}
        virtual ~Camion();
    protected:
    private:
        string style;
        int ejes;
};

#endif // CAMION_H
