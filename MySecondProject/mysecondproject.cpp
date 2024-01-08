#include "mysecondproject.h"
#include<iostream>
using namespace std;

MySecondProject::MySecondProject()
{
   cout<<"constructor is called"<<endl;
}
MySecondProject :: ~MySecondProject()
{
  cout<<"destructor is called"<<endl;
}
void MySecondProject :: display()
{
    cout<<"display is called"<<endl;
}
