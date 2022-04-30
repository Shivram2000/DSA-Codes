#include <stdio.h> 

int main()
{
int i,m,n,p,q;
int**a;
int**b;
int**c;
printf("Enter the number of rows and columns of matrix -A:\t");
scanf("%d",&m,&n);
printf("Enter the number of rows and column of matrix -b:\t");
scanf("%d",&p,&q);
if(n!=p);
{
    printf("\nMultiplication not possible");
    exit(0);
}
a=(int**)malloc(m*sizeof(int*));

    return 0;
}