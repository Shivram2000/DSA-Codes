#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,m,n,p,q , t=1,size1=0,size2=0,size=0,k=1,l=1,h=1;
	int a[10][10], sp_a[10][10], b[10][10], sp_b[10][10] , c[10][10], sp_c[10][10] ;
	printf("\n Enter the no.of rows & columns of first sparse matrix :\n");
	scanf("%d%d",&m,&n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\n Enter the elements A [%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Diplay of first matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if (a[i][j]!=0)
			{
				size1 ++;
			}
		}
	}
	printf("\n The no of non-zero elements : %d\n", size1);
	
	printf("\n Enter the no.of rows & columns of second sparse matrix :\n");
	scanf("%d%d",&p,&q);
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("\n Enter the elements B [%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Diplay of second matrix :\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			if (b[i][j]!=0)
			{
				size2 ++;
			}
		}
	}
	printf("\n The no of non-zero elements : %d\n", size2);
	sp_a[0][0]=m;
	sp_a[0][1]=n;
	sp_a[0][2]=size1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				sp_a[k][0]=i;
				sp_a[k][1]=j;
				sp_a[k][2]=a[i][j];
				k++;
			}
		}
	}
	printf("\n Sparse matrix representation of first matrix :\n");
	for(i=0; i<size1+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp_a[i][j]);
		}
		printf("\n");
	}
	sp_b[0][0]=p;
	sp_b[0][1]=q;
	sp_b[0][2]=size2;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(b[i][j]!=0)
			{
				sp_b[l][0]=i;
				sp_b[l][1]=j;
				sp_b[l][2]=b[i][j];
				l++;
			}
		}
	}
	printf("\n Sparse matrix representation of second matrix: \n");
	for(i=0; i<size2+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp_b[i][j]);
		}
		printf("\n");
	}
	if(m!=p && n!=q)
	{
		printf("\n Matrix addition is not possible");
		exit(0);
	}
	else
	{
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	printf("\n Displaying sum of matrices\n");
	for(i=0; i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if (c[i][j]!=0)
			{
				size ++;
			}
		}
	}
	sp_c[0][0]=m;
	sp_c[0][1]=n;
	sp_c[0][2]=size;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(c[i][j]!=0)
			{
				sp_c[h][0]=i;
				sp_c[h][1]=j;
				sp_c[h][2]=c[i][j];
				h++;
			}
		}
	}
	printf("\n Sparse matrix representation of the final matrix: \n");
	for(i=0; i<=size;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp_c[i][j]);
		}
		printf("\n");
	}
}