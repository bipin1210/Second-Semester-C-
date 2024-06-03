#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr[0]<<endl;
    cout<<arr<<endl;        //name of array (arr) is same as address of first element of array
    cout<<&arr[0]<<endl;
    cout<<*(arr)<<endl;     //array ko first element
    cout<<*(arr+2);         //array ko 3rd element two step agadi badhne
    return 0;
}