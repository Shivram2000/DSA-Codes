#include <stdio.h> 

int main()
{
int a[10][10],i,j,m,n,row=0,col=0;
printf("\nEnter Number of rows and column: ");
scanf("%d %d",&m,&n);
for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        printf("Enter the value for A[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Displaying matrix-A :\n");
for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

for (j=0;j<n;j++)
{
   for (i=0;i<m;i++)
    {
       row=row+a[i][j];
    }
    printf("\nThe sum of rows %d = %d",j+1,row);
    row=0;
}
for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        col=col+a[i][j];
    }
        printf("\nThe sum of column %d = %d",i+1,col);
        col=0;
}
    return 0;
}