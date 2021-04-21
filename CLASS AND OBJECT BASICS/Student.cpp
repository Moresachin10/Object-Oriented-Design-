#include <iostream>

using namespace std;

class student
{
    // Properties of this class can be accessed outside if they are under public access modifiers
    private:
       int Age;
       int RollNo;

     // Learning how to access private property of a class using public functions
    public:
        void getAge(int a)
        {
            Age = a;
        }

        void getRollNo(int r)
        {
            RollNo = r;
        }

        void display()
        {
            cout << "Age: " << Age << "RollNo: " << RollNo;
        }

};
