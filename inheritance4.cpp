#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"base class";
    }
};
class B:public A {};
class C:public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}