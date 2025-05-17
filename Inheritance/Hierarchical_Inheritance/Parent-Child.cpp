#include<iostream>
using namespace std;

class Parent 
{
public:
    void getParent()
    {
        cout << "Parent....." << endl;
    }
};

class Child_1 : public Parent
{
public:
    void getChild_1()
    {
        cout << "Child - 1 ..... "<< endl;
    }
};

class Child_2 : public Parent
{
public:
    void etChild_2()
    {
        cout << "Child - 2 ....." << endl;
    }
};

int main()
{
    Child_1 Myobj_1;
    Child_2 Myobj_2;

    Myobj_1.getParent();
    Myobj_2.getParent();
    return 0;
}