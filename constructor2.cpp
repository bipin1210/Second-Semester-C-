#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,width,area;
    public:
    Rectangle(int l,int w){
    length=l;
    width=w;
    area=l*w;
    }
    void getdata(){
        cout<<length<<endl<<width<<area;
    }
};
int main(){
    Rectangle r1(10,20);
    r1.getdata();
}