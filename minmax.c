#include<stdio.h>
#include<conio.h>
int a[100];
int main()
  {
   int n,i,max,min;
   printf("\nEnter the number of elements in the array");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
    printf("\nEnter the element");
    scanf("%d",&a[i]);
   }
   max=min=a[0];
   for(i=1;i<n;i++)
   {
    if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
   }
   printf("\nmax = %d &min = %d",max,min);

   return 0;
  }
