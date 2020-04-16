#include <iostream>
using namespace std;
 int add(int x, int y)
{
    return(x+y);
}


int main()
{
  int num1,num2,sum;
  cout<<"enter first number"<<endl;
  cin>>num1;
  cout<<"enter second number"<<endl;
  cin>>num2;
  sum=add(num1,num2);
  cout<<"sum of numbers"<<endl<<sum<<endl;
  return 0;
}


