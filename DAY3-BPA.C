#include<stdio.h>
int main()
{
int i,j,n;
clrscr();
printf("enter the valueof n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=n-1;j>=i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}

printf("\n");
}
getch();
return 0;
}
