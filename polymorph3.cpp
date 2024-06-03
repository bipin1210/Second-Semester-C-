#include<iostream>
using namespace std;
class Shape{
    public:
   virtual void draw(){
        cout<<"i can be of any shape";
    }
};
class Triangle:public Shape{
    public:
    void draw(){
        cout<<"make 3 sides";
    }
};
class Rectangle:public Shape{
    public:
    void draw(){
        cout<<"make 4 sides";
    }
};
int main(){
   Shape*ptr[]={new Triangle, new Rectangle};
   for(int i=0;i<2;i++){
    ptr[i]->draw();
   }
   return 0;
}