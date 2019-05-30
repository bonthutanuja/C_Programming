#include<stdio.h>
#include<conio.h>
void main()

{
	int hun,fif,twen,ten,fiv,two,one,rps;
	printf("enter the amount in rupees");
	scanf("%d",&rps);
	while(rps>=100)
	{
		hun=rps/100;
		printf("no of hundreds=%d\n",hun);
		break;
	}
		while(rps>=50)
	{
		fif=rps/50;
		printf("no of fifties=%d\n",fif);
		break;
	}
		while(rps>=20)
	{
		twen=rps/20;
		printf("no of twenties=%d\n",twen);
		break;
	}
		while(rps>=10)
	{
		ten=rps/10;
		printf("no of tens=%d\n",ten);
		break;
	}
		while(rps>=5)
	{
		fiv=rps/5;
		printf("no of fives=%d\n",fiv);
		break;
	}
		while(rps>=2)
	{
		two=rps/100;
		printf("no of twos=%d\n",two);
		break;
	}
		while(rps>=1)
	{
		one=rps/100;
		printf("no of oness=%d\n",one);
		break;
	}
}
