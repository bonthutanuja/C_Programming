#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,i,n;
	printf("enter the range");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 c=b+a;
	 a=b;
	 b=c;
	 printf("%d",c);
	}
}

