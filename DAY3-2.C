#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a[100],c,n;
printf("enter the range");
scanf("%d",&n);
printf("enter the elements",n);
for(i=0;i<n;++i)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("the sorted array is");
for(i=0;i<n;++i)
printf("%d",a[i]);
getch();
return 0;
}
