#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char s[100];
	printf("enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=s[i]+32;
	}
	printf("%s",s);
}
