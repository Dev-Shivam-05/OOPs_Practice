#include<iostream>
using namespace std;

class Car
{
public:
    string car_name;
};

class Brand : public Car
{
public:
    string brand_name;
};
class Model : public Brand
{
public:
    string model_name;
    void setCars()
    {
        cout << "Enter Car Type :- ";
        cin >> car_name;
        cout << "Enter Brand Name :- ";
        cin >> brand_name;
        cout << "Enter Model :- ";
        cin >> model_name;
    }
    void getCars()
    {
        cout << "Car Type :- " << car_name << endl;
        cout << "Brand Name :- " << brand_name << endl;
        cout << "Model :- " << model_name << endl;
    }
};

int main()
{
    Model obj1;

    obj1.setCars();
    obj1.getCars();

    return 0;
}