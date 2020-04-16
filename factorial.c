#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,no,b=1;
	printf("enter a no");
	scanf("%d",&a);
	no=a;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%d",b);
getch();
return 0;
}
