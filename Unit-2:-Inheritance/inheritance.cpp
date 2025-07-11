#include<iostream>
using namespace std;

class Student   // it is base classs
{
    public:
    string name ;
    int id;
    int age;

    void setData(string name, int id, int age)
    {
        this->name = name;
        this->id = id;
        this->age = age;
    }
    void displayData()
    {
        cout<<"Student details:"<<endl;
        cout<<"Name: "<< name << endl;
        cout<<"id: "<< id << endl;
        cout<<"age: "<< age << endl;
    }
};

class Student2 : public Student   // it is derived  class . it is inherit form base class
{
    public:
    int salary;

    void setsalary(int salary)
    {
        this->salary = salary;
        cout<<"Salary: "<<salary <<endl;
    }
};

int main()
{
    Student2 s;
    s.setData("surenda kumar pasi", 23, 20);
    s.displayData();

    s.setsalary(340000);

    return 0; 
}