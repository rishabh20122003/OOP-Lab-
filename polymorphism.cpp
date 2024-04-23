#include<iostream>
using namespace std;
class baseclass 
{
public:
int a=5,b=4;
int mul=a*b;

void display()
{
cout<<"mul of"<<a<<"and"<<b<<"is"<<mul<<endl;
}
};
class derivedclass:public baseClass
{
public:
int add=a+b;
void display()
{
cout<<"add"<<a<<"and"<<b<<"is"<<add<<endl;
}
}; 


int main()
{
baseclass b1;
derivedclass d1;
baseclass=*ptr;
ptr=&b1;
ptr->display();
}
