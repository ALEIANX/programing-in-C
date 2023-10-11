#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=0&&marks<=33)
	{
	printf("fail");
    }
	else if(marks>=34&&marks<=50)
	{
	printf("D");
    }
	else if(marks>=51&&marks<=60)
	{
	printf("C");
    }
    else if(marks>=61&&marks<=70)
    {
	printf("B");
    }
    else if(marks>=71&&marks<=80)
    {
	printf("A");
	}
	else if(marks>=81&&marks<=90)
	{
	printf("AA");	
	}
	else if(marks>=91&&marks<=100)
	{
	printf("VERY GOOD");

	}
	else
	{
	printf("invalid");
	}
}