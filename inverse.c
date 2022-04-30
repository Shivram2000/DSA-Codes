#include <stdio.h> 

int main()
{
int a[10],n,i;
printf("Enter no of elements to be entered in array");
scanf("%d",&n);
printf("input the elements in the array ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Reversed array is:");
for(i=n-1;i>=0;i--)
{
    printf("%d\n",a[i]);
}
    return 0;
}                                                            