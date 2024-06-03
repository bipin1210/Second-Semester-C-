#include<iostream>
using namespace std;
class Instrument{
    public:
    virtual makesound()=0     //yo pure virtual function
};
//pure virtual function bhako class = abstract class.abstract class has no objects.
class Piano:public Instrument{
void makesound(){
    cout<<"piano goes tun tun";
}
};
int main(){
Instrument *ptr=new Piano;

}