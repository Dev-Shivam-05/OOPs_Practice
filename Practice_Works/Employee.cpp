#include<iostream>
using namespace std;

class Employee
{
private:
    string emp_name;
    long int emp_salary;
    int emp_experience;
    int emp_age;
public:
    int empBio(){
        cout << "Enter Your Name :- ";
        cin >> this->emp_name;
        cout << "Enter Your Age :- ";
        cin >> this->emp_age;
        cout << "Enter Your Salary :- ";
        cin >> this->emp_salary;
        cout << "Enter Your Experience :- ";
        cin >> this->emp_experience;

        cout << "Hello! " << emp_name;
        cout << " You Are " << emp_age << " Year Old And  At This Age Your Salary Is " << emp_salary << " With " << emp_experience << " Years Of Experience" << endl;
    }
};

int main()
{
    Employee emp;
    emp.empBio();
    return 0;
}