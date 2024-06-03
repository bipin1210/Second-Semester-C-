#include<iostream>
using namespace std;
class Complex{
    private:
    int real,imaginary;
    public:
    Complex(){}
    Complex(int rl,int im){
        real=rl;imaginary=im;
    }
void getdata() const{
    cout<<"the difference is"<<endl<<real<<"-"<<imaginary;
}
Complex operator-(Complex c){
    Complex temp;
    temp.real=real-c.real;
    temp.imaginary=imaginary-c.imaginary;
    return temp;
}

};
int main(){
    Complex c1(10,20),c2(30,40),c3,c4;
    c3=c1-c2;
    c3.getdata();
    return 0;
}