#include<iostream>
using namespace std;
class Instrument{
    public:
    void makesound(){
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
    Instrument *ptr=new Instrument;
    ptr->makesound();
     Piano *ptr1=new Piano;
    ptr1->makesound();

    return 0;
}