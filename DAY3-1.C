#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[100],max,count=1;
clrscr();
printf("enter the range of the array");
scanf("%d",&n);
printf("enter the elements in the array\n",n);
for(i=1;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
count=count+1;
}
}
printf("the heighest number in the array is %d",max);
getch();
return 0;
}