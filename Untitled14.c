#include<stdio.h>
#include<conio.h>
void main()
{
	int n,ch,rem,num,sum;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter cases between 2 and 11");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:if(n%2==0)
		printf("the given value is divisible by 2");
		else
		printf("it is not div by 2");
		break;
		case2:while(n!=0)
		{
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		if(sum%3==0)
			printf("the given value is divisible by 3");
		else
		printf("it is not div by 3");
		break;
	}
}
