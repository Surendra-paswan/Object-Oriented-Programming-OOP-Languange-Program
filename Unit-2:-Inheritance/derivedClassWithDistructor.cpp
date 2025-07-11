#include<iostream>
using namespace std;

class Employee
{
    public:
    string name;
    int age;

    void setData(string name , int age)
    {
        this->name = name;
        this->age = age;
    }
    void displayData()
    {
        cout<<"Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student: public Employee
{
    public:
    int id;

    Student(int id)
    {
        this->id = id;
    }

    ~Student()
    {
        cout<< "This is distructor." << endl;
    }
};

int main()
{
    Student s(3);
    s.setData
}