#include <stdio.h> 
int main()
{
int arr[100],arr1[100],arr2[100],i,j,m,n,k,temp;
printf("Enter the no of element in 1st array: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the value of the array arr[%d]:",i);
scanf("%d",&arr[i]);
arr2[i]=arr[i];
}
k=i;
printf("Enter the no of element in 2nd array: ");
scanf("%d",&m);
for(i=0;i<m;i++){
printf("Enter the value of the array arr1[%d]:",i);
scanf("%d",&arr1[i]);
arr2[k]=arr1[i];
k++;
}
printf("Display of merged array: \n");
for(i=0;i<k;i++){
  printf("%d\t",arr2[i]);
}

for(i=0;i<k-1;i++){
    for(j=i+1;j<k;j++){
        if(arr2[i]>arr2[j]){
            temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
        }
    }
}
printf("\nSorted merged array:\n");
for(i=0;i<k;i++){
printf("\t%d",arr2[i]);
}
return 0;
}