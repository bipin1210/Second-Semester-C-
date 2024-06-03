#include <iostream>
using namespace std;
class Distance{
    private:
    int feet,inch;
    public:
    Distance(){
        feet = 0;inch = 0;
    }
    Distance(int ft,int in){
        feet = ft;
        inch = in;
    }
    void add2numbers(Distance d1,Distance d2){
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
    };
    void getdata(){
        cout<<feet<<inch;
    }
};
int main(){
    Distance d3;
    Distance d1(10,2);
    Distance d2(20,3);
    d3.add2numbers(d1,d2);
    d3.getdata();
    return 0;
}