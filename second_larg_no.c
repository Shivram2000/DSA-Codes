#include <stdio.h> 
int main()
{
int a[100],i,n,j,temp,s;
printf("Enter the total number you want to insert: ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter the value you want to insert a[%d]: ",i);
scanf("%d",&a[i]);
} 
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           s=a[i];

        }
    }
}
printf("The second largest number of the array is:");
printf("%d",s);
    return 0;
}