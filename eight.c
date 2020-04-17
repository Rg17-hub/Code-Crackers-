#include <iostream>
using namespace std;
class addition
{
 public:
 inline int sum(int x, int y)
 {
 return(x+y);
 }
};
int main()
{
int a,b,c;
addition obj;
cout<<"enter two numbers :"<<endl;
cin>>a>>b;
c=obj.sum(a,b);
cout<<" the sum of two numbers is :"<<c<<endl;
return 0;
}
 