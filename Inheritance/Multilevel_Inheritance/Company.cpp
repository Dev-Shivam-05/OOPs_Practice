#include<iostream>
using namespace std;

class Company
{
public:
    string company_name;
    void setCompany()
    {
        cout <<"Enter Company Name :- ";
        cin >> company_name;
    }
};

class Employee : public Company
{
public:
    string employee_name;
    void setEmployee()
    {
        cout <<"Enter Employee Name :- ";
        cin >> employee_name;
    }
};

class Inten : public Employee
{
public:
    string inten_name,team_leader;
    void setInten()
    {
        cout <<"Enter Inten Name :- ";
        cin >> inten_name;
    }
    void getCompany()
    {
        cout << "Company :- " << company_name << endl;
        cout << "Employee :- " << employee_name << endl;
        cout << "Inten :- " << inten_name << endl;

        cout << "In "<< company_name <<" Brand "<< employee_name <<" Is a Employee And A Team Director And "<< inten_name <<" Works Under "<< employee_name <<". ";
    }
};

int main()
{
    Inten obj1;

    obj1.setCompany();
    obj1.setEmployee();
    obj1.setInten();

    obj1.getCompany();
    return 0;
}