#include<stdio.h>
#include <conio.h>
#include<string.h>
 void main()
{
    int a[100],i,j,n,count=0 ;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
  for(i=0; i<n; i++)
    {
		    for(j=i+1; j<n; j++)
     
            {
        	   if(a[i]==a[j])
        	    {
			       count++;
			       break;
		       }
	       }
 		}
     
    printf("\nduplicate numbers in the  array are %d",count);
    
}


