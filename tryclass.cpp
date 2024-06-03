#include<iostream>
using namespace std;
class shapes{
    public:
   int circle;
   int e_triangle;
   void length(){
    cout<<"the triangle have 3 m in length\t";
   }
   void breadth(){
    cout<<"the triangle have 2m in breadth";
   }
};
int main(){
shapes s1,s2;
s1.circle=2;
s2.e_triangle=4;
cout<<s1.circle<<endl<<s2.e_triangle;
}
  