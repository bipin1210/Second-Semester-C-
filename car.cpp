#include <iostream>
using namespace std;
class car{
    private:
    int model,speed;
    string make;
    public:
    car(){
        speed=0;
    }
    car(int mo,int spd, string _make){
        model = mo;
        speed = spd;
        make = _make;
    }
    void accelerate(){
        speed = speed + 5;
    }
    void brake()
    {
        speed = speed - 5;
    }
    int getdata(){
        cout<< make << " is at " << speed <<"km/s speed" << endl;;
        return speed;
    }
};
int main(){
    car ferrari(1983,0,"Ferrari");
    car porche(2020,0,"Porche");
    ferrari.accelerate();
    porche.accelerate();
    porche.accelerate();
    porche.getdata() ;
    ferrari.getdata();
    porche.brake();
    porche.getdata();
    return 0;
}
