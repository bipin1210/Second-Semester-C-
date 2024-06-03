#include<iostream>      //data private and function public.
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    public:
    void setdata(int rl,string nm){
    rollno=rl;
    name=nm;
    }
    void getdata(){
    cout<<name<<rollno<<endl;
    }
};
int main(){
    Student s1,s2;
    //s1.name="bipin"; can't be accessed as data private.
    s1.setdata(1210,"bipin");
    s1.getdata();
    s2.setdata(1200,"ram");
    s2.getdata();
    return 0;
}