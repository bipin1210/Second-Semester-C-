
#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    public:
    student(int ro,string nm){
        roll=ro;
        name=nm;
    }
    void getdata();//function declare outside the class
};
//function declaration outside the class
void student::getdata(){
    cout<<roll<<name;
}
int main(){
    student s1(100,"lol");
    s1.getdata();
    return 0;
}