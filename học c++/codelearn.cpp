#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int sumOfNumber = 0; //ban dau chua co co nen bien so la 0//khong khai bao bien tinh
public:
    Student(string name, int age)
    { //phuong thuc khoi tao co truyen tham so
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Student s1("Hung", 18);
    Student s2("Trang", 11);
    s1.sumOfNumber = 2;
    s2.sumOfNumber = 3;
    cout << s1.sumOfNumber <, endl;
    cout << s2.sumOfNumber <, endl;
}