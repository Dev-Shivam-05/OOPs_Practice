#include<iostream>
using namespace std;

class Student
{
public:
    Student();
    ~Student();
};

Student::Student()
{
    cout << "----- Constructor Created -----" << endl;
}

Student::~Student()
{
    cout << "------ Destructor Created ------" << endl;
}


int main()
{
    Student std;

    return 0;
}