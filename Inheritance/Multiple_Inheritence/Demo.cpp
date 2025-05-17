#include<iostream>
using namespace std;

class A 
{
public:
    A()
    {
        cout << "Hii!! From Class A.";
    }
};

class B
{
public:
    B()
    {
        cout << "Hii!! From Class B.";
    } 
};

class C : public A , public B
{
public:
    C()
    {
        cout << "Hii!! From Class B.";
    } 
};

int main() 
{
    C obj;
    return 0; 
}