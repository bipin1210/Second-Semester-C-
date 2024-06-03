#include<iostream>
using namespace std;
class complex{
    private:
    int real,imaginary;
    public:
    complex(){}
    complex(int rl,int im){
        real=rl;
        imaginary=im;
    }
    void add2number(complex c1 ,complex c2){
        complex temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        cout<<temp.real<<endl<<temp.imaginary;
    }
};
int main(){
    complex c1(10,20),c2(20,30),c3;
    c3.add2number(c1,c2);
    //c1 ko through call garyo bhane mathiko fcn ma c1 lekhna pardaina as implicitly called.
    return 0;
}