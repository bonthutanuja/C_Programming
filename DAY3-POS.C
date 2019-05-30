#include<stdio.h>
#include<conio.h>
void main()
{
char s1[20],s2[20],s3[20];
int i=0,a=0,b=0,p=0,m,n,rang=0,temp;
clrscr();
printf("enter string1\n");
gets(s1);
printf("enter string2\n");
gets(s2);
printf("enter the pos\n");
scanf("%d",&p);
a=strlen(s1);
b=strlen(s2);
while(i<=a)
{
s3[i]=s1[i];
i++;
}
m=a+b;
n=b+p;
for(i=p;i<m;i++)
{
temp=s3[i];
if(rang<b)
{
s1[i]=s2[rang];
rang=rang+1;
}
s1[n]=temp;
n=n+1;
}
puts(s1);
getch();
}
