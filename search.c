#include <stdio.h> 
#include<stdlib.h>
int main()
{
int n,i,k,flag=0;
int*arr;
printf("\nEnter no of element to be inserted: ");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
    printf("Memory allocation failed");
    exit(0);
}
for(i=0;i<n;i++)
{
printf("Enter the value %d of the array:",i);
scanf("%d",&arr[i]);
}
printf("\nEnter the number that has to be searched: ");
scanf("%d",&k);
for (i=0;i<n;i++)
{
    if(arr[i]==k)
    {
        flag=1;
        printf("\n%d is found in the array at the position=%d",k,i+1);
    }

    }

if(flag==0)
printf("\n%d doesnot exist in the array",k);
free(arr);
    return 0;
}