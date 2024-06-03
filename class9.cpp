#include<iostream>
using namespace std;
class Student{
private:
int roll;
string name;
public:
static string cname;
Student(int rl,string nm){
    roll=rl;name=nm;
}
void getdata(){
    cout<<name<<roll<<cname;
}

static void staticfxn(){
 cout<<cname;
}
};
string Student::cname="deerwalk";  //static variable lai class bahira initialize (dtype class::variable="value")

int main(){
    Student s1(100,"ram");
    Student s2(200,"hari");
    s1.getdata();
    s2.getdata();
    Student::cname="lri";
    s1.getdata();
    s2.getdata();
    Student::staticfxn();     //calling the static variable
    s1.staticfxn();
    return 0;
}