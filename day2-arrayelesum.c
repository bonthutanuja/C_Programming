#include <stdio.h>
#include<conio.h>
 
void main()
{
  int a[20],n,i,sum=0;
  printf("enter the range\n");
  scanf("%d", &n);
  printf("Enter the array elements");
  for (i=0; i<=n;i++)
  {
    scanf("%d", &a[i]);
  }
    for(i=0;i<=n;i++)
    {
	sum = sum + a[i];
    }
   printf("Sum of the array elements = %d", sum);
   getch();
  
}
