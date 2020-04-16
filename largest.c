
#include<stdio.h>
#include<conio.h>
main()
{
int a[1000],m,l,i=0;
printf("how many nos.do u want");
scanf("%d",&m);
printf("enter no.%d: ",i+1);
scanf("%d",&a[i]);
l=a[i];

for(i=1;i<m;++i)
{
printf("enter no.%d: ",i+1);
scanf("%d",&a[i]);
if(a[i]>l)
{
l=a[i];
}
}
printf("of");
for(i=0;i<m;++i)
{
if(i==m-1)
{
printf("&%d",a[i]);
}
else
{   if(i==m-2)
    {printf("%d",a[i]);
    }
    else
    {printf("  %d, ",a[i]);
    }
}
}
printf("\nlargest=%d",l);
getch();

return 0;
}

