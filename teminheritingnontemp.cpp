// #include<iostreaam>
// using namespace std;
// class Footer{
// protected:
// string footer="bipin bartaula";
// };

// template<class>
// class Book:public Footer{
//     T pagecontent;
//     public:
//     Book(t arg){
//         pagecontent=arg;
//     }
//     void readpage(){
//     cout<<pagecontent<<endl;
//     cout<<footer<<endl;
//     }
// };

// int main(){

// }
#include <iostream>
using namespace std;

//non template class
class Footer{
    protected:
    string footer = "Bipin Bartaula";
};

template<class T>

//template class
class Book : public Footer{
    T content;

    public:
        Book(T content){
            this->content = content;
        }

        void printContent(){
            cout << content << endl;
            cout << footer << endl;
        }
};

int main(){
    Book <string>book("bipin");
    Book <int>book2(80085);

    book.printContent();
    book2.printContent();

    return 0;
}