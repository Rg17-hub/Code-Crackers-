#include<iostream>
using namespace std;

class add
{
  protected:
 int num1, num2;
  public:
  void setnum()
 {
 cout<<"\n Enter First Number : ";
 cin>>num1;
 cout<<"\n Enter Second Number : ";
cin>>num2;
 }
};
class addition: public add
{
 int sum;
public:
 void add()
 {
 sum = num1 + num2;
 }
 void display()
 {
cout<<"\n Addition of Two Numbers : "<<sum;
 }
};
int main()
{
addition a;
a.setnum();
a.add();
a.display();
return 0;
}