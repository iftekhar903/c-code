#include<iostream>
#include<conio.h>
using namespace std;

class student
 {
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }

};
int main()
{
    student iftekhar,usha;
    usha.id=100;
    usha.gpa=3.44;
    usha.display();
    //cout<<usha.id<<"  "<<usha.gpa<<endl;(not need if we use display)
    iftekhar.id=100;
    iftekhar.gpa=3.44;
    iftekhar.display();
    //cout<<iftekhar.id<<"  "<<iftekhar.gpa<<endl;
    getch();

}

