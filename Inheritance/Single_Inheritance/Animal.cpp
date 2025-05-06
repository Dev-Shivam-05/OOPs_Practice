#include<iostream>
using namespace std;

class Animal
{
public:
    string animal_name;
};

class Dog : public Animal
{
public:
    string breed_name;
    void inputAnimal()
    {
        cout << "Enter Animal Name :- ";
        cin >> animal_name;
        cout << "Enter Breed Name :- ";
        cin >> breed_name;
    }
    void DisplayAnimal()
    {
        cout << "Animal :- " << animal_name << endl;
        cout << "Breed Name :- " << breed_name << endl;
    }
};

int main()
{
    Dog dog;
    dog.inputAnimal();
    dog.DisplayAnimal();
    return 0;
}