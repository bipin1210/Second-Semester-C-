#include<iostream>
using namespace std;
class Father{
    public:
    Father(){
        cout<<"i am father...";
    }
};
class Mother{
public:
Mother(){
    cout<<"i am mother...";
}
};
class Child:public Father,public Mother{

};
int main(){
    Child c1;
    // duitai parent class ma gayera aaautai function bnayera call garyo bhane ambiguity aauxa
    //  to resolve that we can use scope resolution operator 
    // c1:father::speak() if we make a speak function in both and call them via child
}