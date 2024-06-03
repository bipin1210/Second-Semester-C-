#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"enter name";
    cin.getline(name,20,'#');//yo 20 le input ma space hale pani bal nadine as 20 space occupy and # user le nadin jel samma new line ma gai rakhne
    cout<<name;
    return 0;
}