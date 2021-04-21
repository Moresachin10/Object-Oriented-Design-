#include <iostream>

using namespace std;

#include "Student.cpp"



int main()
{
    student s1;

    student *s2 = new student;

    s1.getAge(10);

    s1.getRollNo(25);

    s2 ->getAge(20);

    s2 ->getRollNo(45);

    s1.display();

    cout << endl;

    s2 ->display();

    return 0;
}
