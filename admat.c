#include<stdio.h>
#include<stdlib.h>
int main()
{
	
   int A[10][10],B[10][10],C[10][10];
   int i, j, m, n ,p ,q;
   printf("Enter the no of rows and coloums of matrix A:  \n");
   scanf("%d%d",&m,&n);
   printf("Enter the no of rows and coloums of matrix B:  \n");
   scanf("%d%d",&p,&q);
   
   if((m!=p)||(n!=q))
   {
   		printf("\nMatrix addition is not possible");
   		exit(0);
   }
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
	  {
         printf("Enter value for A[%d][%d]: ", i, j);
         scanf("%d", &A[i][j]);
      }
   }
   
   for(i=0; i<p; i++) 
   {
      for(j=0;j<q;j++) 
	  {
         printf("Enter value for B[%d][%d]:", i, j);
         scanf("%d", &B[i][j]);
      }
   }
   printf("Displaying matrix -A:\n");
   for(i=0; i<m; i++) 
   {
      for(j=0;j<q;j++) 
	  {
         printf("%d ", A[i][j]);
      }
      printf("\n");
   }
   printf("Displaying matrix -B:\n");
   for(i=0; i<p; i++) 
   {
      for(j=0;j<q;j++) 
	  {
         printf("%d ", B[i][j]);
      }
      printf("\n");
   }
   printf("Sum of entered matrices : \n");

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            C[i][j] =A[i][j] +B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
        return(0);
    }

   
