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
      	flag=0;
        	for(j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
					temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)
            {
            	break;
			}
    	}
    printf("\nAfter Sorting in Ascending Order: \n");
    for(i=0;i<n;i++){
    printf("\n%d",arr[i]);
    }
    return 0;
}