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
    void setvalue(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student iftekhar,usha;
    usha.setvalue(100,3.44);
    usha.display();
    //cout<<usha.id<<"  "<<usha.gpa<<endl;(not need if we use display)
  iftekhar.setvalue(101,3.64);
    iftekhar.display();
    //cout<<iftekhar.id<<"  "<<iftekhar.gpa<<endl;
    getch();

}


