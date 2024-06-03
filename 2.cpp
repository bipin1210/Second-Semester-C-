//as c++ can't have same value of x two times namespace is used to resolve the conflict
#include<iostream>
using namespace std;
namespace namespace1{
    int x=10;
}
namespace namespace2{
    int x=20;
}using namespace namespace2;
int main(){
    cout<<x;
    return 0;

}