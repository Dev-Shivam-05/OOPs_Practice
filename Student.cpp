#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
public:
    void getStudent()
    {
        cout << "Enter your Name :- ";
        cin >> name;
        cout << "Enter your Roll Number :- ";
        cin >> rollNo;
        cout << "The Roll Number Of " << this->name << " Is " << this->rollNo;
    }
};

int main()
{
    Student std;

    std.getStudent();
    return 0;
}