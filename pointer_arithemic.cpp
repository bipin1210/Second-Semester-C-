#include<iostream>
using namespace std;
int main()
{
 int myArray[]={10,20,30,40,50};
 int *ptr=&myArray[0];
 cout<<ptr<<endl;
 cout<<&myArray[0]<<endl;
 cout<<*ptr<<endl;
 cout<<(ptr+2)<<endl;
 cout<<&myArray[2]<<endl;
 cout<<*(ptr+2)<<endl;

 return 0;   
}