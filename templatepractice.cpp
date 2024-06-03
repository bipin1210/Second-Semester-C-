#include<iostream>
using namespace std;
template<class T>
T getmax(T x,T y){
    return (x>y)?x:y;
}
// int getmax(int x,int y){
//     return (x>y)?x:y;
// }
// float getmax(float x,float y){
//     return (x>y)?x:y;
// }
// char getmax(char x,char y){
//     return (x>y)?x:y;
// }
int main(){
    cout<<getmax<int>(10,20)<<endl;         //tyo int float ra char nalekhe ni hunxa
    cout<<getmax<float>(20.33f,20.44f)<<endl;
    cout<<getmax<char>('a','b')<<endl;
    cout<<getmax<float>(20,20.20f)<<endl;
    return 0;
}