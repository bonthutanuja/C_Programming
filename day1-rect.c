#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int l,w ;
	float area,perimeter;
	printf("enter the values of length and width\n");
	scanf("%d %d",&l,&w);
	area=w*l;
	perimeter=2*(l+w);
	printf("area of rectangle %f",area);
	printf("perimeter of rectangle %f",perimeter);
}
