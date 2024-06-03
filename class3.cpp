/*#include<iostream>
using namespace std;
class Rectangle{
    private:
    int l;
    int  w;
    public:
    void setlength(int a){
        a=l;
    }
     void setwidth(int b){
        b=w;
     }
     void getlength(){
        return l;
     }
     void getwidth(){
        return w;
     }
     int getarea(){
        return l*w;
     }
};
int main(){
    Rectangle r1;
    r1.setlength(190);
    r1.setwidth(100);
    r1.getwidth();
    r1.getlength();
    cout<<r1.getarea();
    }*/
#include <iostream>
using namespace std;
class rectangle{
    private:
    int length,width;
    public:
    void setlength(int l)
    {
        length = l;
    }
    void setwidth(int w)
    {
        width=w;
    }
    int getlength(){
        return length;
    }
    int getwidth(){
        return width;
    }
    int getarea(){
        return length*width;
    }

};

int main()
{ 
    rectangle r1;
    int l,w;
    cout << "enter length: ";
    cin >> l;
    cout << "enter width :";
    cin >> w;
    r1.setlength(l);
    r1.setwidth(w);
    cout<<"for 1st rectangle"<<endl;
    cout<<r1.getlength();cout<<endl;
    cout<<r1.getwidth();cout<<endl;
    cout<<r1.getarea();
    return 0;
}
