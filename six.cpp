#include <iostream>
using namespace std;
class Second;
class First
{
	int num1;
	public:
		First(int num1)
		{
			this->num1=num1;
		}
		int getNum1()
		{
			return num1;
		}
	friend int add(First&,Second&);
};
class Second
{
	int num2;
	public:
		Second(int num2)
		{
			this->num2=num2;
		}
		int getNum2()
		{
			return num2;
		}
	friend int add(First&,Second&);
};
int add(First &f,Second &s)
{
  return f.num1+s.num2;
}
int main()
{
	First f(100);
   Second s(200);
 cout<<add(f,s)<<endl;
	return 0;
}
