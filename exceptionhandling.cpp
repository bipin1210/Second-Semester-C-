#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value for a:";
    cin>>a;
    cout<<"enter the value for b:";
    cin>>b;
    try{
        if(b==0){
            throw "exception occured";
        }
        else{
            cout<<a/b<<endl;
        }
    }
    catch(const char* ptr){
        cout<<ptr<<endl;
    }

    // cout<<a/b<<endl; yesle error generate garna sakne
    cout<<"hello world";
    return 0;
    }
    //const halyo bhane pointer le point garya value change garna mildaina