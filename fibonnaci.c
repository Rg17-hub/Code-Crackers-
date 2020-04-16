#include<stdio.h>
#include<conio.h>
main()
 {
 int a=0,b=1,c;

 printf("%d\n",a);
 printf("%d\n",b);

while(c<100)
 {
  c=a+b;
  a=b;
  b=c;
  printf("%d\n",c);
 }
 getch();
 return 0;
}
