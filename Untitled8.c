#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b=0,c,i,n;
	printf("enter the range");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 c=a+b;
	 a=b;
	 b=c;
	 printf("%d",c);
	}
}

