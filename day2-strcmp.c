#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,temp=1;
char s1[10],s2[10];
printf("enter the s1 value:\n");
gets(s1);
printf("enter the s2 value:\n");
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[i])	
	temp=1;
	else
	temp=0;
}
if(temp==1)
	printf("equal");
	else
	printf("unequal");
}
