#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"i am a base constructor";
    }
   virtual ~Base(){
        cout<<"i am a base destructor";
    }
};
class Derived:public Base{
    public:
    Derived(){
         cout<<"i am a  derived constructor";
    }
    ~Derived(){
        cout<<"i am a derived destructor";
    }
};

int main(){
    Base*ptr=new Derived;
    delete ptr;
    return 0;
}