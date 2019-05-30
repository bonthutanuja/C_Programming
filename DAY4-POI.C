#include<stdio.h>
int a[]={1,2,3,4,5};
int *ptr;
int main(void)
{
int i;
clrscr();
ptr=a;
printf("\n\n");
for(i=0;i<6;i++)
{
printf("a[%d]=%d",i,a[i]);
printf("ptr+%d=%d\n",i,*(ptr++));
}
getch();
return 0;
}