#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,length=0,temp;
	char s1[100];
	printf("enter the string1");
	gets(s1);
	char s2[100];
	printf("enter the string2");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	length++;
	temp=length;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[temp]=s2[i];
		temp++;
	}
	s1[temp]='\0';
	printf("the concatenated string is %s /n",s1);
}
