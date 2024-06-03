#include <iostream>
using namespace std;
class Birthday
{
private:
    int day, month, year;

public:
    Birthday() {}
    Birthday(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // void setdata(int day, int month, int year)    or by setter
    // {
    //     this->day = day;
    //     this->month = month;
    //     this->year = year;
    // }

    void printdata()
    {
        cout << day << month << year;
    }~Birthday()
    {
        cout << "Birthday destructor";
    }
};

class Person
{
private:
    string name;
    Birthday birthday;

public:
    Person() {}
    Person(string name) : birthday(8, 11, 2002)
    {
        this->name = name;
        // birthday.setdata(8,11,2002);
    }

    void printdata()
    {
        birthday.printdata();
    }
    ~Person()
    {
         cout << "person destructor";
    }
};

int main()
{
    { // for scope limitation
        Person p1("ayush");
        p1.printdata();
    }
    cout << "------------";
    return 0;
}