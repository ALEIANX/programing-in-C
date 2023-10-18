#include <stdio.h>
int main(){
int i;
int n;
i=1;
printf("enter the value of n\n");
scanf("%d",&n);
printf("even number from 1\n");
while(i<=n){
if(i%2==0){
   printf("%d\n",i);
}
i++;
}
   return 0;
}