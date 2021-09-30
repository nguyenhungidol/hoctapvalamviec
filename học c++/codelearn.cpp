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
    
};
int main()
{
    Circle tron(7);
    tron.getArea();
    tron.getCircumference();
    cout << tron.getArea() << endl;
   

    return 0;
}