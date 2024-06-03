#include<iostream>
using namespace std;
class animal{
    protected:
    string name="kritish";
    public:
    void sleep(){
        cout<<"i love sleeping"<<endl;
    }
    void play(){
        cout<<"i love playing"<<endl;
    }
    void getdata(){
        cout<<"animal have a name and that is "<< name<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"i can bark"<<endl;
    }
};
int main(){
    dog c1;
    c1.sleep();
    c1.play(); 
    c1.bark();
    c1.getdata();
    return 0;
}