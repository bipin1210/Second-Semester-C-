#include<iostream>
using namespace std;
class counter{
    protected:                    //class ra inherited gareko class pani
    int count;
    public:
    counter(){
        count=0;
    }
    void operator++(){
        this->count=count+1;      //count+=1
    }
    void getdata(){
        cout<<count;
    }
};
class Counterdr:public counter{    //inherit garyo nmathiko class
        public:                    //constructor ko public jastai
        void operator--(){
        this->count=count-1;       //count-=1
    }
};
int main(){
    Counterdr c1;
    ++c1;
    ++c1;
    c1.getdata();
    --c1;
    c1.getdata();
    return 0;
}

//default constructor inherit garxa parameterized constructor chai gardaina.