#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int pi=22.7,r1,r2;
	float area,perimeter;
	printf("enter the value of r1 and r2");
	scanf("%d %d",&r1,&r2);
	area=pi*r1*r2;
	perimeter=2*pi*r1;
	printf("area of circle %f",area);
	printf("perimeter of circle %f",perimeter);
	
	
}

