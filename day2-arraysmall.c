#include <stdio.h>
#include <string.h>
 
main()
{
   int A[10];
int i , j , b,n;
 
for(i=0 ; i<10 ; i++)
{
printf(" Enter the Number %d : " , i+1 );
scanf("%d" , &A[i] );
}
 
for(i=0 ; i<10 ; i++)
{
for(j=i ; j<10 ; j++)
{
if(A[i] < A[j])
{
b = A[j] ;
A[j] = A[i] ;
A[i] = b ;
}
}
}
 
printf(" Second smallest Number is : %d\n" , A[n-2] );
getch();
}
