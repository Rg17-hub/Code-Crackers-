#include<stdio.h>
#include<conio.h>
int main()
{
	int no,r,a,rev=0;
	printf("enter a number");
		scanf("%d",&a);
		no=a;
		while(a!=0)
		{
		r=a%10;
		rev=rev*10+r;
	a=a/10;
		}
		printf("%d",rev);
		if(rev==no)
		printf("palindrome");
		else
			printf("not palindrome");
		getch();
		return 0;
}

