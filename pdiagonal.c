#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int i, j, m, n, A[10][10], product=1;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &m, &n);
    
    if(m!=n)
	{
		printf("\nMatrix is not a square matrix");
   		exit(0);
    }
 	for(i= 0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		printf("Enter value for A[%d][%d]: ", i, j);
         	scanf("%d", &A[i][j]);
    	}
  	}
   	printf("\nDisplaying matrix -A:\n");
    for(i=0; i<m; i++) 
    {
    	for(j=0;j<n;j++) 
	    {
     	    printf("%d ", A[i][j]);
        }
      	printf("\n");
    }
    for(i=0;i<m;i++)
   	{
   		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				product=product*A[i][j];
			}
		}
	}
 
 	printf("\n The Product of Diagonal Elements of a Matrix =  %d",product);
 	return 0;
}