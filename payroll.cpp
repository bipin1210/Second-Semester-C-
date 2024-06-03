#include <iostream>
using namespace std;
class PayRoll {
private:
 string name;
int hours_worked;
int hourly_work_rate;

public:
  PayRoll() {}
  void seed(string na,int hw,int hwr) {
    name = na;
    hours_worked = hw;
    hourly_work_rate = hwr;
  }

int getGrossPay() { return hours_worked * hourly_work_rate; }
  string getName() { return name; }
};

int main(void) {
  PayRoll employees[3];

  for (int i = 0; i < 3; i++) {
   string temp_name;
    cout << "Enter Name : ";
    cin >> temp_name;
int temp_hours_worked;
    cout << "Enter Hours Worked : ";
    cin >> temp_hours_worked;
int temp_work_rate;
    cout << "Enter Hourly Work Rate :";
    cin >> temp_work_rate;
    employees[i].seed(temp_name, temp_hours_worked, temp_work_rate);

    cout << " Gross Pay of " << employees[i].getName() << " is "<< employees[i].getGrossPay() <<endl;
  }
}