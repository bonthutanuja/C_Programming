#include<stdio.h>
#include<conio.h>
int main()
{
int i,w=0;
char s[10];
printf("enter the string");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
w++;
}
printf("the no words are %d",w+1);
getch();
return 0;
}