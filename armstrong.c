#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,r,num1;
	printf("enter thr no");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(num1==sum)
	{
	printf("armstrong no");
	}
	else
		printf("not an armstrong no");
	getch();
	return 0;
}