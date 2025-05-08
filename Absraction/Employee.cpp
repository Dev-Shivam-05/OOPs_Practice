#include<iostream>
using namespace std;

class Employee 
{
protected:
    virtual void SetEmployeeData() = 0;
    virtual void GetEmployeeData() = 0;
    virtual void SetManagerData() = 0;
    virtual void GetManagerData() = 0;
};

class Manager : public Employee
{
public:
    string manager_name;
    int manager_age,manager_salary,manager_experience;
    
    string employee_name;
    int employee_age,employee_salary,employee_experience;

    void SetManagerData()
    {        
        cout << "Enter Manager Name :- ";
        getline(cin,manager_name);
        
        cout << "Enter Manager Age :- ";
        cin >> manager_age;
        
        cout << "Enter Manager Exeperience :- ";
        cin >> manager_experience;
        
        cout << "Enter Manager Salary :- ";
        cin >> manager_salary;
    
        cout << endl;
    }
    
    void SetEmployeeData()
    {
        cout << endl;

        cout << "Enter Employee Name :- ";
        cin >> employee_name;

        cout << "Enter Employee Age :- ";
        cin >> employee_age;
        
        cout << "Enter Employee Exeperience :- ";
        cin >> employee_experience;
        
        cout << "Enter Employee Salary :- ";
        cin >> employee_salary;
        
        cout << endl;
    }

    void GetManagerData()
    {
        cout << endl <<   "----- Manager Data Start -----" << endl;
        cout << endl << "Name :- " << manager_name << endl;
        cout << "Age :- " << manager_age << endl;
        cout << "Experience :- " << manager_experience << endl;
        cout << "Salary :- " << manager_salary << endl;
        cout << "----- Manager Data End -----" << endl;
    }
    
    void GetEmployeeData()
    {
        cout << endl << "----- Employee Data Start -----" << endl;
        cout << endl <<  "Name :- " << employee_name << endl;
        cout << "Age :- " << employee_age << endl;
        cout << "Experience :- " << employee_experience << endl;
        cout << "Salary :- " << employee_salary << endl;
        cout << endl << "-----  Employee Data End -----" << endl;
    }

};

int main()
{
    Manager obj;

    obj.SetManagerData();
    obj.SetEmployeeData();
    obj.GetManagerData();
    obj.GetEmployeeData();
    return 0;
}