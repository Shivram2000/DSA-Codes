#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[30],n,i,j,temp,flag;
    printf("\n Enter the number of elements to be stored:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\n Enter the value: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
      	{
      	temp=arr[i];
      	j=i-1;
        	while(j>=0 && arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
    	}
    printf("\nAfter Sorting in descending Order: \n");
    for(i=n-1;i>=0;i--)
    printf("\n%d",arr[i]);
    return 0;
}