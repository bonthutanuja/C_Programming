#include <stdio.h>
#include<conio.h>
 
void main()
{
  int a[20],n,i,x,pos;
  printf("enter the range\n");
  scanf("%d", &n);
  printf("Enter the array elements");
  for (i=0; i<=n;i++)
  {
    scanf("%d", &a[i]);
  }
  printf("value to be inserted");
  scanf("%d",&x);
  for (i=0; i<=n;i++)
  if(x<a[i])
  {
  	pos=i;
  	break;
  }
  for (i=n; i>=pos;i--)
  a[i]=a[i-1];
  a[pos]=x;
  printf("list is\n");
  for (i=0; i<n;i++)
  printf("%d",a[i]);
  printf("\n\n after inserting list is");
  printf("%d",a[i]);
  }
  
