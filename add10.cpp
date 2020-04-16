#include<iostream>
using namespace std;
 class add1
 {
 protected:
	 int a,b;
 public:
	 void getnum()
	 {
		 cout<<"enter the numbers";
		 cin>>a>>b;
	 }
 };
 class add2:public add1
 {
	 int sum;
 public:
	 void addition()
	 {
		 
		 sum=a+b;
	 }
	 void show()
	 {
		cout<<"result="<<sum;
	 }
	 };
 int main()
 {
	 add1 s1;
	 add2 s2;
	 s2.getnum();
	 s2.addition();
	 s2.show();
	 return 0;
 }

