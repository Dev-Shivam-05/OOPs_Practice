#include<iostream>
using namespace std;

class Employee
{
public:
    void printMsg()
    {
        cout << "-----Message From Employee-----";
    }
};

class Manager : public Employee
{
public:
    void printMsg()
    {
        cout << "-----Message From Manager-----";
    }

};

int main()
{
    Manager obj;

    obj.printMsg();
    return 0;
}