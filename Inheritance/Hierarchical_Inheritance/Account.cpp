#include<iostream>
using namespace std;

class Account
{
public:
    void Display()
    {
        cout << "Account Displaying..." << endl;
    }
};

class Saving : public Account
{
public:
    void Overdraft()
    {
        cout << "Saving Account Intrest Is Calculated...." << endl;
    }
};

class Current : public Account
{
public:
    void IntrestRate()
    {
        cout << "Current Account Has A OverDraft Limit ...." << endl;
    }
};

int main()
{

    return 0;
}