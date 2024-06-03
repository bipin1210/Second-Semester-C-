#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void tireno()=0;
};
class Bike:public Vehicle{
    public:
    void tireno(){
        cout<<"a bike has 2 tires";
    }
};
class Car:public Vehicle{
    public:
    void tireno(){
        cout<<"a car has 4 tires";
    }
};
int main(){
    Vehicle*ptr[]={new Bike,new Car};
    for(int i=0;i<2;i++){
     ptr[i]->tireno();
    }
    return 0;
}