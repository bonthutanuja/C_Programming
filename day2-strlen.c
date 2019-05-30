#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,len=0;
	char s[100];
	printf("enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	{
		len++;
	}
	printf("length is %d",len);
	getch();
	
}
