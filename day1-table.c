#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k=0,n,r;
	printf("enter the table number");
	scanf("%d",&n);
	printf("enter the range");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i*n;
		printf("\n%d*%d=%d",i,n,k);
	}
}

