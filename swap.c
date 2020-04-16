#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swap a=%d and b=%d",a,b);
}
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("before swap a=%d and b=%d",a,b);
	swap(a,b);
	getch();
	return 0;
}