#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20],n,i,j,temp,flag;
    printf("\n Enter the number of elements to be stored:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\n Enter the value:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
      	{
      	int min;
      	min=i;
        	for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                	min=j;	
				}
            }
            if(min!=i)
            {
            	temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
			}
    	}
    printf("\nAfter Sorting in Ascending Order: \n");
    for(i=0;i<n;i++)
    printf("\n%d",arr[i]);
    return 0;
}