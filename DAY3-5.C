#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j;
char c;
printf("enter the character");
scanf("%d",&n);
c=97;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("% c",c);
}
c++;
}
getch();
return 0;



}