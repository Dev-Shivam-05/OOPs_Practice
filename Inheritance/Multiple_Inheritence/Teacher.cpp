#include<iostream>
using namespace std;

class Teacher 
{
public:
    void getTeach()
    {
        cout << "Teacher is Teaching...." << endl;
    }
};

class Researcher
{
public:
    void getResearch()
    {
        cout << "Researcher Is Researching..." << endl;
    }
};

class Faculty : public Teacher , public Researcher
{
public:
    void getFaculty()
    {
        cout << "Faculty Is Guiding to Stdents..." << endl;
    }
};

int main()
{
    Faculty Myobj;
    Myobj.getFaculty();
    Myobj.getResearch();
    Myobj.getTeach();
    return 0;
}