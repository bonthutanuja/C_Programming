#include<stdio.h>
#include<conio.h>
void main()
{
	int n,ch,rem,sum,uni,a,b,os,es,diff;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter cases between 2 and 11");
	scanf("%d",&ch);
	switch(ch)
	{
		case 2:if(n%2==0)
		printf("the given value is divisible by 2");
		else
		printf("it is not div by 2");
		break;
		case 3:while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		printf("the total sum is %d",sum);
		if(sum%3==0)
		printf("the given value is divisible by 3");
		else
		printf("it is not div by 3");
		break;
		case 4:
	        uni=n%100;
			if("uni%4||uni==0")
		printf("the given value is divisible by 4");
		else
		printf("it is not div by 4");
		break;
		case 5:
			
			uni=n%100;
			if("uni%5||uni==0")
				printf("the given value is divisible by 5");
		else
		printf("it is not div by 5");
		break;
		case 6:
			while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		if("sum%2==0||sum%3==0")
		printf("the given value is divisible by 6");
		else
		printf("it is not div by 6");
		break;
		case 7:
			if("n%7==0")
			printf("the given value is divisible by 7");
		else
		printf("it is not div by 7");
		break;
		case 8:
			uni=n%100;
			if("uni%4==0||n%2==0")
		printf("the given value is divisible by 8");
		else
		printf("it is not div by 8");
		break;
		case 9:
			uni=n%100;
			if("uni%3==0||uni%9==0")
				printf("the given value is divisible by 9");
		else
		printf("it is not div by 9");
		break;
		case 10:
			uni=n%100;
			if("uni==0")
				printf("the given value is divisible by 10");
		else
		printf("it is not div by 10");
		break;
		case 11:
			a=n;
			b=n/10;
			while(a>0)
			{
				os=os+(a%10);
				a=a/100;
			}
			while(b>0)
			{
				es=es+(b%10);
				b=b/100;
			}
			  diff=os-es;
			  if("diff%11==0||diff!=0")
			  	printf("the given value is divisible by 11");
		else
		printf("it is not div by 11");
		break;
		default:printf("u entered wrong value");
			  
			
			
			
		
	}
}
