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
    student (int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{

    student alim(100,3.44);
    alim.display();
    //cout<<usha.id<<"  "<<usha.gpa<<endl;(not need if we use display)
  student suparna(101,3.64);
    suparna.display();
    //cout<<iftekhar.id<<"  "<<iftekhar.gpa<<endl;
    getch();

}



