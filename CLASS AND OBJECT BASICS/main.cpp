#include <iostream>
#include "student.cpp"

using namespace std;

int main()
{
    // Creates Objects Statically
    Student s1,s2;

    s1.Age = 20;
    s1.RollNo = 10;

    cout << s1.Age << endl;
    cout << s1.RollNo << endl;

    s2.Age = 25;
    s2.RollNo = 30;

    cout << s2.Age << endl;
    cout << s2.RollNo << endl;


    // Create Object Dynamically

    Student *s3 = new Student;

    (*s3).Age = 28;
    (*s3).RollNo = 35;

    cout << (*s3).Age << endl;
    cout << (*s3).RollNo << endl;

    // Dereferencing can be done in a better way using arrow

    s3 -> Age = 40;
    s3 -> RollNo = 50;

    cout << s3 -> Age << endl;
    cout << s3 -> RollNo << endl;
    return 0;
}
