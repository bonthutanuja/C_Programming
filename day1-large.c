#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the values of a,b and c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is the largest number %d",a);
	}
	else if(b>a && b>c)
	{
		printf("b is the largest number %d",b);
	}
	else
	{
		printf("c is the largest number %d",c);
	}
}
