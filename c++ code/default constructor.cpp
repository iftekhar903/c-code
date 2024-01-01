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
    student ()//default constructor
    {
        cout<<"default constructor"<<endl;
    }
};
int main()
{
    student ob;
    student alim(100,3.44);
    alim.display();
    student suparna(101,3.64);
    suparna.display();
    getch();

}




