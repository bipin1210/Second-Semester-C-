#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;x=y;y=temp;
    cout<<"after swap"<<x<<y<<endl;
}
int main(){
    int x=10;int y=20;
    cout<<"the value before swap"<<x<<y<<endl;
    swap(x,y);
    cout<<"the value after swap"<<x<<y<<endl;
    return 0;
}