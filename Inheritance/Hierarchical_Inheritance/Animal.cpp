#include<iostream>
using namespace std;

class Animal 
{
public:
    Animal()
    {
        cout << "I Am An Animal." << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog Is An Animal" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
        cout << "Cat Is An Animal" << endl;
        Dog();
    }
};

int main()
{
    Cat obj;
    return 0;
}