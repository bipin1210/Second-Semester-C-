#include<iostream>
using namespace std;
class Animal{
public:
void info(){
    cout<<"it is a animal";
}
};
class Dog:public Animal{
public:
void bark(){
    cout<<"denji makima woof woof"<<endl;
}
};
class Cat:public Animal{
public:
void meow(){
    cout<<"meow meow"<<endl;
}
};
int main(){
    Dog d1;
    cout<<"dog class"<<endl;
    d1.info();
    d1.bark();
    Cat c1;
     cout<<"cat class"<<endl;
     c1.info();
     c1.meow();
     return 0;
}