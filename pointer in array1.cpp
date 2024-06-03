/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"input";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"input";
        cin>>arr[i];          //input pani yei tarika le pointer lera garna milxa cin>>*(arr+i)
    }
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl; // same as cout<<arr[i]
    }
}
