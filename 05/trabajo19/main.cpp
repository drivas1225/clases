#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int main()
{
    int tem;
    string tems;
    Vehicle lis[4];
    for(int i=0;i<4;i++){
        cout<<"ingrese el año del vehiculo"<<endl;
        cin>>tem;
        cout<<"ingrese la placa del vehiculo"<<endl;
        cin>>tems;
        Vehicle h(tems,tem);
        lis[i]=h;

    }

    for(int i =0 ;i<4;i++){
        cout<<lis[i].getDesc();
        cout<<endl;
    }



    return 0;
}
