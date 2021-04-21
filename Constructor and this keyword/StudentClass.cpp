#include <iostream>

using namespace std;

class student
{
    public:
        int rollno;
        int age;

        student()
        {
            cout << "Default constructor called (NO parameters)." << endl;
        }

        // Destructor function

        ~student()
        {
            cout << "Destructor is called." << endl;
        }

        student(int r,int a)
        {
            cout << "Constructor 2 called.(with parameters)" << endl;
            rollno = r;
            age = a;
        }

        student(int age)
        {
            cout << "Constructor 4 where argument with same name as class property called." << endl;

            this ->age = age;
        }

        void display()
        {
            cout << "RollNo:" << rollno << "Age:" << age << endl;
        }
};

