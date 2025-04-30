#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
public:
    void setStudent();
    void getStudent();
};

void Student::setStudent()
{
    cout << "Enter Srudent Name :- ";
    cin >> this->name;
    cout << "Enter Student RollNo :- ";
    cin >> this->rollNo;
}

void Student::getStudent()
{
    cout << endl << "----- Student Detail's Is -----" << endl;
    cout << "Name :- " << this->name << endl;
    cout << "rollNo :- " << this->rollNo << endl << endl;
}

int main()
{
    Student std;

    std.setStudent();
    std.getStudent();
    return 0;
}