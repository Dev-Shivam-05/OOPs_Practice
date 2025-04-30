#include<iostream>
using namespace std;

class User
{
private:
    string name;
    int age;
    long long int phone_number;
public:
    User()
    {
        cout << "User Constructer Created" << endl;
    }
    ~User()
    {
        cout << "User Constructer Destroyed" << endl;
    }
};

int main()
{
    User u;
    return 0;
}