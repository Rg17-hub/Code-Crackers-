#include<iostream>
using namespace std;
class myclass
{
	int num;
	public:
  myclass()
  {
    num=0;
  }
		myclass(int num)
		{
		this->num=num;
			
		}
		void disp()
	{
		cout<<endl<<num<<endl;
	}
		myclass operator+(myclass &ref)
    {
      myclass temp;
      temp.num=this->num+ref.num;
      return temp;
    }
};

int main()
{
	myclass m1(20);
  myclass m2(39);
  m1.disp();
  m2.disp();
  myclass m3;
  m3=m1+m2;
  m3.disp();
}
