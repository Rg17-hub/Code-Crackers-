#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n = 100, t1 = 0, t2 = 1;
        
       
	        while (t1 <= n)
	        {
         cout<<t1;

          int sum = t1 + t2;
		  t1 = t2;   
		  t2 = sum;
	        }

}