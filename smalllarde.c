#include <stdio.h> 

int main()
{
    int a[10],n,i,j,max;
    int min=max=a[0];
printf("Enter the no elements to be entered in the array: ");
scanf("%d",&n);
printf("Input the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
 {
     if(a[j]<min)
    min=a[j];
 }
 printf("smallest element=%d",min);

 for(j=0;j<n;j++)
 {
     if(a[j]>max)
    max=a[j];
 }
 printf("\nlargest element=%d",max);
    return 0;
}