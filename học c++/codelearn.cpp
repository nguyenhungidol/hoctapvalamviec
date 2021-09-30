#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
    double getCircumference()
    {
        return 2 * 3.14 * radius;
    }
};
int main()
{
    Circle tron(7);
    tron.getArea();
    tron.getCircumference();
    cout << tron.getArea() << endl;
    cout << tron.getCircumference ()<< endl;

    return 0;
}