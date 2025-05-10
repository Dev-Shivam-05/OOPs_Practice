#include<iostream>
#include<cmath>
using namespace std;

class Calculator
{
public:
    void Operation(int a,double b)
    {
        cout << "The Sum Of "<< a <<" And "<< b <<" Is :- "<< a + b <<".";
    }
    void Operation(double a, int b)
    {
        cout << "The Subtraction Of "<< a <<" And  "<< b <<" Is :- "<< a - b<<".";
    }
    void Operation(double a,double b)
    {
        cout << "The Product Of "<< a <<" And "<< b <<" Is :- "<< a * b<<".";
    }
    void Operation(float a, float b)
    {
        cout << "The Division Of "<< a <<" And "<< b <<" Is :- "<< a / b <<".";
    }
    void Operation(int a , int b)
    {
        cout << "The Module Of "<< a <<" And "<< b <<" Is "<< a % b <<".";
    }
};

int main()
{
    Calculator myobj;
    double num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;
    cout << "Enter Another Number :- ";
    cin >> num_2;

    myobj.Operation(num_1,num_2);
    return 0;
}