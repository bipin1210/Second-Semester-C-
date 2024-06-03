#include <iostream>
using namespace std;
class circle{
private:
    double radius;
public:
  circle(){
    radius=0.0;
  }
    circle(double r)
    {
        radius = r;
    }
    void setRadius(double new_radius)
    {
        radius = new_radius;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
    double getDiameter()
    {
        return 2 * radius;
    }
    double getCircumference()
    {
        return 2 * 3.14 * radius;
    }
};
int main()
{
    int user_radius;
    cout<<"Enter the number: ";
    cin >> user_radius;
    circle local_circle(user_radius);
    cout << "Radius: " << local_circle.getRadius() << endl;
    cout << "Area: " << local_circle.getArea() << endl;
    cout << "Diameter: " << local_circle.getDiameter() << endl;
    cout << "Circumference: " << local_circle.getCircumference() << endl;
}