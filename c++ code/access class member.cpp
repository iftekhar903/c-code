#include<iostream>
#include<conio.h>
using namespace std;

class student
 {
public:
    int id;
    double gpa;

};
int main()
{
    student usha;
    usha.id=100;
    usha.gpa=3.44;
    cout<<usha.id<<"  "<<usha.gpa<<endl;
    student iftekhar;
    iftekhar.id=100;
    iftekhar.gpa=3.44;
    cout<<iftekhar.id<<"  "<<iftekhar.gpa<<endl;
    getch();

}
