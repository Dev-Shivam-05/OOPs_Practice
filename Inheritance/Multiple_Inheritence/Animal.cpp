#include<iostream>
using namespace std;

class Animal
{
public:
    string dog_voice,cat_voice;
    void speak();
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Enter How Dog Voice Is :- ";
        getline(cin, dog_voice);
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Enter How Cat Voice is :- ";
        getline(cin, cat_voice);
    }
};

class Pet : public Dog , public Cat , public Animal
{
    void speak()
    {
        cout << dog_voice << " And " << cat_voice;
    }
};

int main()
{
    Pet Myobj;
    Myobj.DisplayDog();
    Myobj.DisplayCat();
    Myobj.speak();
    return 0;
}