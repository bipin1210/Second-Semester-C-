#include<iostream>
using namespace std;
class student{  // creating class
    public:
    int rollno; // atrribute of object
    string name;
   void study ()  // behaviour of object
   {
    cout<<"learning";
   }
   void sleep(){
    cout<<"sleeping";
   }
};
int main(){
    student s1,s2; //creating object
    s1.name="bipin\t"; // intialization
    s1.rollno=1210;
    cout<<s1.name<<s1.rollno;
    return 0;
}