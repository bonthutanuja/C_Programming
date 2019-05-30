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
	s2[i]=s1[i];
	s2[i]='\0';
	printf("the value of s2 is \n");
	puts(s2);
		
	}
