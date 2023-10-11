#include <stdio.h>
int main(){
int a,b,c;
 printf("enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 int big;
 big=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
 printf("the greator no=%d,big");
 
}