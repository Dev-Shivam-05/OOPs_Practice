include<iostream>
using namespace std;

class Person
{
public:
};

class Employee : public Person
{
public:
    string emp_name;
    int emp_age;
    long int emp_salary;
    
};

class Student : public Person
{
public:
    long int marks;
    
};

class Details : public Employee , public Student
{
public:
    Details()
    {
        cout << "Enter Name :- ";
        getline(cin , emp_name);
        cout << "Enter Age :- ";
        cin >> emp_age;
        cout << "Enter Salary :- ";
        cin >> emp_salary;
        cout << "Enter Marks :- ";
        cin >> marks;
    } 
    void getDetail()
    {
        cout << "Name :- " << emp_name << endl;
        cout << "Age :- " << emp_age << endl;
        cout << "Salary :- " << emp_salary << endl;
        cout << "Marks :- " << marks << endl;
    }
};

int main()
{
    Details Myobj;

    Myobj.getDetail();
    return 0;
}