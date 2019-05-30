#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    int arr1[30], arr2[30], i, num;
    printf("\nEnter no of elements :");
    scanf("%d", &num);
    printf("\nEnter the 1st array values :");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The 2nd array is :");
    for (i = 0; i < num; i++)
    {
    	scanf("%d",&arr2[i]);
    }
    
        for(i=0;i<num;i++)
        {
        	arr2[i]=arr1[i];
		}
    printf("the array after copyin is");
    for(i=0;i<num;i++)
    printf("arr2[%d]=%d",i,arr2[i]);
    
    getch();
}
