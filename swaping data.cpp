#include <stdio.h>
int main()
{int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
c=a;
a=b;
b=c;
 printf("swap the value of a with b %d\n",a);
 printf("swap the value of b with a %d\n",b);
 ;}