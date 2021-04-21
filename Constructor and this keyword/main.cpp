#include <iostream>
#include "StudentClass.cpp"

using namespace std;

int main()
{
 /*   student s1;

    student s2(10);

    student *s3 = new student(15,20);

    student *s4 = new student(30);

    s1.display();

    s2.display();

    s3 ->display();

    s4 ->display(); */

    // Using copy constructor

   /* student s5(30,40);

    s5.display();

    student s6(s5);

    s6.display();

    student *s7 = new student(80,90);

    s7 ->display();

    student s8(*s7);

    s8.display();

    student *s9 = new student(s8);

    s9 ->display(); */

    // Copy assignment operator(=)

    student s10(100,200);

    s10.display();

    student s11(300,400);

    s11.display();

    student *s12 = new student(400,500);

    s12 ->display();

    s11 = s10;

    s11.display();

    *s12 = s10;

    s12 ->display();

    s10 = *s12;

    s10.display();

    // Here if we just run the program without calling delete keyword explicitly
    // we will find that destructor will be called only twice but it was supposed
    // to be called thrice since there are 3 objects
    // so delete keyword is used to delete the dynamically created object *s12

    delete s12;
    return 0;
}
