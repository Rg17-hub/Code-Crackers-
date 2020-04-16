#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,r;
	printf("enter thr no");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("sum of digit = %d",sum);
	getch();
	return 0;
}