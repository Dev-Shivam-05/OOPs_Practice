#include<iostream>
using namespace std;

class Grandparents
{
public:
    Grandparents()
    {
        cout << "------ GrandParents Constructor Called ------" << endl;
    }
};

class Parents : public Grandparents
{
public:
    Parents()
    {
        cout << "------ Parents Constructor Called ------" << endl;
    }
};

class Child : public Parents
{
public:
    Child()
    {
        cout << "------ Child Constructor Called ------" << endl;
    }
};

int main()
{
    Child obj1;
    
    return 0;
}