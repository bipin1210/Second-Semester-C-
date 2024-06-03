#include<iostream>
using namespace std;
class Base{
    protected:
    int x;
    public:
    void getdata(){
        cout<<"enter value of x=";
        cin >>x;
    }
};
class Derived:public Base
{
    private:
    int y;
    public:
    void readdata(){
        cout<<"enter the value of y=";
        cin>>y;
    }
    void product(){
    cout<<"product ="<< x*y;
    }
};
int main(){
    Derived d;
    d.getdata();
    d.readdata();
    d.product();
    return 0;
}