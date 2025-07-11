#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int age;

    void setData(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void DisplayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class RollNo : public Student
{
    public:
    int Rollno;

    void setRollNo(int Rollno)
    {
        this->Rollno = Rollno;
        cout << "RollNO: " << Rollno << endl; 
    }
};
int main()
{
    RollNo s;
    s.setData("surndra",21);
    s.DisplayData();
    s.setRollNo(12);
    return 0;
}