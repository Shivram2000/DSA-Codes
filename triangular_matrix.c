#include <stdio.h>
int main()
{
	int m,n,k=0,l=0,g=0,h=0,i,j;
	printf("\n Enter the no of rows and column of the matrix :\n ");
	scanf("%d%d",&m,&n);
	int A[m][n];
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf(" Enter the element [%d][%d] of the matrix : ",i,j);
				scanf("%d",&A[i][j]);
			}
			printf("\n");
		}
		printf("\n Displaying the matrix :\n ");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("\t%d",A[i][j]);
		}
		printf("\n");
	}
		for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i<j && A[i][j]!=0)
			{
				k=1;
			}
			else if (i>j && A[i][j]!=0)
			{
				l=1;
			}
			else if (i==j && A[i][i]!=0 && A[i][j+1]!=0 && A[i][j-1]!=0)
			{
				g=1;
			}
			else
			{
				h=1;
			}
		}
	}
	if(l==0)
	{
		printf("\n It is a Upper Triangular Matrix");
	}
	else if(k==0)
	{
		printf("\n It is a Lower Triangular Matrix");
	}	
	else if(g==1)
	{
		printf("\n It is a Tri-Diagonal Matrix");
	}
	else if(h==1)
	{
		printf("\n It is not a Tri-Diagonal or Upper or Lower Triangular Matrix");
	}
	return 0;
}

