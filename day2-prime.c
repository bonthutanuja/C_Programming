#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,count;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
	for(j=1;j<=n;j++)
	{
	   if(i%j==0) 
	   	count++ ;
	}
	if(count==2)
	printf(" %d",i);
		
	}
}
