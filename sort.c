#include <stdio.h> 
#include<stdlib.h>
int main()
{
int n,i,j,temp;
int*arr;
printf("enter the no of element to be entered: ");
arr=(int*)malloc(n*sizeof(int));
scanf("%d",&n);
if(arr==NULL)
{
    printf("Memory allocation failed");
    exit(0);
}
for(i=0;i<n;i++)
{
printf("Enter the value arr[%d] of the array:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if (arr[i]>arr[j])  
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("\n After sorting in Ascending order: \n");
for(i=0;i<n;i++)
printf("\n%d",arr[i]);
free(arr);
    return 0;
}