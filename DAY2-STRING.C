#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

	char s1[]="tanuja";
	
	char s2[]="MAMATHA";
	
	int ch;
	printf("enter the cases between 1 and 6");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("%d",strlen(s1));
	break;
	case 2:
		printf("%s",strupr(s1));
		break;
	case 3:
		printf("%s",strlwr(s2));
		break;
	case 4:
		printf("%s\n",strcpy(s2,s1));
		break;
	case 5:
		printf("%s\n",strcmp(s1,s2));
		break;
	case 6:
		printf("%s\n",strcat(s1,s2));
		break;
}
h}
