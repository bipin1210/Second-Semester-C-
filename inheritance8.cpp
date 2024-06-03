#include<iostream>sssssss
using namespace std;
class Employee{
    protected:
    string name;float salary;
    public:
    Employee(){}
    Employee(string name,float salary){
        this->name=name;
        this->salary=salary;
    }
    void getdata(){
        cout<<name<<"\t"<<salary<<endl;
    }
};
class Developer:public Employee{
    private:
    string planguage;
    public:
    Developer(string name,float salary,string planguage):Employee(name,salary){   //tala gayera tyo intialize garna naparos bhanera
        // this->name=name;
        // this->salary=salary;
        this->planguage=planguage;    

    }
    void getdetail(){
        Employee:getdata();
        cout<<planguage<<endl;
    }
};
int main(){
    Developer d1("bipin",100000,"c");
    d1.getdata();
    d1.getdetail();
    return 0;
}