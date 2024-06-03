#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    public:
    Complex(){}
    Complex(int rl){
        real=rl;
    }

Complex operator++(int){
    Complex temp;
    real++;
    return temp;
}
void getdata() const{
    cout<< "the result is:"<<endl<<real;
}

};
int main(){
    Complex c1=10;
    c1++;
    c1.getdata();
    return 0;
}