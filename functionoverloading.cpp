
#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
int add(int x,int y,int z){
    return x+y+z;
}
float add(float x,float y){
    return x+y;
}
int main(){
cout<<add(10.10f,20.10f);
    return 0;
}
