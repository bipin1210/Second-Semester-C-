#include<iostream>
using namespace std;
class Lecturer{
    protected:
int id;
string lname;
public:
Lecturer(){}
Lecturer(int id,string lname){
this->id=id;
this->lname=lname;
}
void readdata(){
    cin>>id>>lname;
}
void printdata(){
    cout<<id<<lname;
}
};

class Parttime:public Lecturer{
private:
float paperhr;
Parttime(){}
Parttime(int id,string lname,float paperhr):Lecturer(id,lname){
this->lname=lname;
}
void readdata(){
    cin>>paperhr;
}
void printdata(){
    cout<<paperhr;
}

};

class Fulltime:public Lecturer{
float papermonth;
public:
void readdata(){
    cout<<"enter paper month";
    cin>>papermonth;
}
void printdata(){
    cout<<papermonth;
}
};
int main(){
    Fulltime s1,s2;
    s1.readdata();
    s1.printdata();
}   
