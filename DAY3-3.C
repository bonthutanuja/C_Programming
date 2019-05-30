#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
char a[5],ch,temp;
printf("enter the range");
scanf("%d",&n);
printf("enter the character",n);
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<n;i++)
{
temp=a[i];
a[i]=a[n];
a[n]=temp;
}
printf("reversing array is %d",a[n]);
getch();
return 0;
}