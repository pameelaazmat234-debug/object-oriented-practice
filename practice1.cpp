#include <iostream>
using namespace std;

class student{
    private:
        string name = "zoya";
        int rollNumber = 0;
        float Cgpa = 0.0;
    public:
        void display()
        {
            cout << name << rollNumber << Cgpa;
        }
};

int main()
{
    student s1;
    s1.display();
}