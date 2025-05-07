#include<iostream>
using namespace std;

class Manager
{
public:
    string manager_name;
    int manager_salary;
    int manager_team;
    Manager()
    {
        cout << "Enter Manager Name :- ";
        getline(cin , manager_name);
        cout << "Enter Manager Salary :- ";
        cin >> manager_salary;
        cout << "Enter Total Team Member's Under Manager :- ";
        cin >> manager_team;
    }
};


int main()
{
    return 0;
}