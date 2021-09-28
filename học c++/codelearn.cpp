#include<iostream>

using namespace std;

class Student
{   
public:
     string name;
     int age;
}
void display(){
    cout<<"Name is "<<name;
    cout<<"Age is "<<age;
}
int main(){
    Student s;
    s.name="Hung";
    s.age=18;
    s.display();
}