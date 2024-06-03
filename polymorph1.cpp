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
int main(){
    Instrument *ptr=new Piano;//jaile ni parent class to pointer
    ptr->makesound();
}
//virtual use garyo bhane latest call hunxa.