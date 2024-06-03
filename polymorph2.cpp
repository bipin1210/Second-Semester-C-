#include<iostream>
using namespace std;
class Instrument{
    public:
    virtual void makesound(){
        cout<<"instrument playing.....";
    }
};
class Piano:public Instrument{
    public:
    void makesound(){
        cout<<"piano playing...";
    }
};
class Guitar:public Instrument{
    public:
    void makesound(){
        cout<<"guitar playing...";
    }
};
int main(){
    Instrument*ptr[]={new Piano,new Guitar};
    for(int i=0;i<2;i++){
        ptr[i]->makesound();
    }
    
} //base class ko function virtual hunai paryo
// base class batai inherit garna paryo polymorphishm inherit garna