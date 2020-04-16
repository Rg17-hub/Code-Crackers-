#include <iostream>
using namespace std;
class add
{
int z;
  public:
add(int x,int y)
{
  cout<<"parameterised constructor"<<endl;
  z=x+y;

}

void display()
{
  cout<<z<<endl;
}

};
int main()
{
 add obj(20,30);
obj.display();

  return 0;
}


