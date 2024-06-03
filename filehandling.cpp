#include<iostream>
using namespace std;

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<name<<endl;
    cin.getline(name,8);
    cin.read(name,8);
    cout.write(name,8)<<endl;
    cout<<name<<endl;

    //to enter single character
    char ch;
    cout<<"Enter any character: ";
    cin.get(ch);
    cout.put(ch)<<endl;
    cout.put('a')<<endl;
    cout.put(97)<<endl;
    return 0;
}