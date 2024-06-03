#include<iostream>
using namespace std;
int main(){
int x=5;
cout<<x<<endl;
cout<<&x<<endl;
int *ptr;
ptr=&x;
cout<<*(ptr)<<endl;
*ptr=20;
cout<<*(ptr)<<endl;
cout<<x<<endl;
return 0;
}