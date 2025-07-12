#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

protected:
    int id;

public:
    void setData(string name, int age, int id)
    {
        this->name = name;
        this->age = age;
        this->id = id;
    }
    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "id: " << id << endl;
    }
};
class Person : public Student
{
    public:
    string nationality;
    
    void showData(string n)
    {
        nationality = n;
        cout << "Nationality: "<< nationality << endl;
    }
};
int main()
{
    Person obj;
    obj.setData("Surendra kumar pasi", 20, 2);
    obj.displayData();
    obj.showData("Nepal");
    return 0;
}