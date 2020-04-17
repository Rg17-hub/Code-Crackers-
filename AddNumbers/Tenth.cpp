#include <iostream>
using namespace std;
#define SUM(number1, number2) (number1 + number2)

int main() 
{
  int number1,number2;
  cout<<endl<<"Enter two numbers="<<endl;
  cin>>number1>>number2;
  cout<<endl<<"Addition="<<SUM(number1,number2)<<endl;
  return 0;
}