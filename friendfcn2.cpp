#include <iostream>
using namespace std;
class Complex{
    private:
    int real,imaginary;
    public:
    Complex(){}
    Complex(int rl,int im){
        real=rl;imaginary=im;
    }
    // void add2Numbers(Complex c2){
    //     Complex temp;
    //     temp.real=real+c2.real;
    //     temp.imaginary=imaginary+c2.imaginary;
    //     return temp;
        
    // }

    void getData(){
        cout<<real<<imaginary;
    }
     friend Complex add2Numbers(Complex c1, Complex c2);
};
   Complex add2Numbers(Complex c1, Complex c2){ 
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        return temp;
     
}

 int main(){
    Complex c1(10,20),c2(20,30),c3;
    
    c3=add2Numbers(c1,c2);
    c3.getData();
    return 0;
 }