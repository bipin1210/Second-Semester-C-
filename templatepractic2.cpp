#include<iostream>
using namespace std;
template<class RT,class t1,class t2>
RT getmax(t1 x,t2 y){
    return(x>y)?x:y;
}
int main(){
cout<<getmax<double,int,double>(20,20.20f)<<endl;
    return 0;
}