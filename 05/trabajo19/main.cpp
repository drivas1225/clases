#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Camion.h"
#include <vector>

using namespace std;

int main()
{
    vector<Vehicle*> vec1;
    Vehicle *v1=new Vehicle("v7y-353",2017);
    Car     *v2=new Car("asd-456",2000,"todo terreno");
    Camion  *v3=new Camion("v4e-456",2010,"pro",6);
    vec1.push_back(v1);
    vec1.push_back(v2);
    vec1.push_back(v3);
    for(int i = 0 ; i<vec1.size() ;i++){
        cout<<vec1[i]->getDesc()<<endl;
    }






    return 0;
}
