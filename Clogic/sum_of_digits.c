/*Q4. Accept a number from the user and calculate the sum of digits*/

#include<stdio.h>
int main()
{
	int number,reminder,sum=0,n;
	printf("\n  Enter a number=");
	scanf("%d", &number);
	n=number;
	while (number)
	{
		reminder=number%10;
		sum+=reminder;
		number/=10;
	}
	printf("\n Sum of Entered number:%d=%d",n, sum);
}