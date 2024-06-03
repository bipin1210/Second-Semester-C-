#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    public:
    student(int r1,string nm){                 //no need to call can call itself.
        roll=r1;
        name=nm;
    }
    void getdata(){
        cout<<name<<roll;
    }
};
int main(){
    student s1(100,"bipin"),s2(200,"bartaula");
    s1.getdata();
    s2.getdata();
    return 0;
}