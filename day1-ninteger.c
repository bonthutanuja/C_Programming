#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count=0;
	printf("enter an intiger");
	scanf("%d",&n);
	while(n!=0)
{
	n/=10;
	++count;
	}
	printf("number of digits is %d",count);	
	
}
