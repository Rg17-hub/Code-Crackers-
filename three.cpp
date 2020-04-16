#include <iostream>
using namespace std;
class addition
{

  int num1,num2;
  public:

 void setnum(int num1 ,int num2 )
{
  this->num1=num1;
    this->num2=num2;
}

void add(int num1, int num2)
{
  cout<<num1+num2;
}

};
int main()
{
 addition a;
  a.add(20,30);

  return 0;
}


