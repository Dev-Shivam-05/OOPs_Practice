#include<iostream>
using namespace std;

class Secret{
protected:
    string info;
public:
    void base()
    {
        info = "Nifty Will Touch 26,000 In the End Of 2025.";
    }
    void showSecret(){
        cout << "The Secret Is :- " << this->info;
    }
};

class Derived : public base{
    public:
        void accessSecret()
        {
            cout << "Accessing Secret In Derived Class" << endl << info;
            info = "EE Sala Cup lolipop";
            cout << "Modifing Secret In Derived Class " << endl << info;
        }
};

int main()
{
    return 0;
}