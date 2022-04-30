#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int i, j, m, n, A[10][10];
  
 	printf("\n Enter Number of rows and columns  :  ");
 	scanf("%d%d", &m, &n);

 	for(i= 0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		printf("Enter value for A[%d][%d]: ", i,j);
         	scanf("%d", &A[i][j]);
    	}
  	}
  	printf("Matrix -A before transposition:\n");
    for(i=0; i<m; i++) 
    {
    	for(j=0;j<n;j++) 
	    {
     	    printf("%d ", A[i][j]);
        }
      	printf("\n");
    }
    
   	printf("Matrix -A after transposition:\n");
    for(i=0; i<n; i++) 
    {
    	for(j=0;j<m;j++) 
	    {
     	    printf("%d ", A[j][i]);
        }
      	printf("\n");
    }
 	return 0;
}