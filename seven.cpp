#include <iostream>
using namespace std;
#define SUM(x, y) (x + y)

int main() 
{
  int num1,num2;
  cout<<"enter two numbers"<<endl;
  cin>>num1>>num2;
  cout<<SUM(num1,num2)<<endl;
  return 0;
}