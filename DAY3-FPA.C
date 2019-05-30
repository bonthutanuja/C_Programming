#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j,k=0;
clrscr();
printf("enter no of rows");
scanf("%d",&n);
for(i=n;i>=0;--i,k=0)
{
for(j=1;j<=n-i;++j)
{
printf(" ");
}
while(k!=2*i-1)
{
printf("*");
++k;
}
 printf("\n");
 }
getch();
return 0;
}

