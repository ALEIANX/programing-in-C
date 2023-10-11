#include<stdio.h>
 int main(){
 int a,b,c;
 printf("enter any three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c)
  {
  	printf("a is greator");
  }
  else if(b>a&&b>c)
  {
   printf("B is greator");
  }
  else 
  {
   printf("C is greator");
  }
 }