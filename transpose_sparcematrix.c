#include <stdio.h> 
int main()
{
int i,j,m,n,a[10][10],size=0,sp_a[10][10],k=1,tr_sp_a[10][10],t=1;
printf("\nEnter the no of rows and coloumn of original sparse matrix: ");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
printf("\n Enter the elments [%d][%d]:",i,j);
scanf("%d",&a[i][j]);
    }
}
printf("\n Displaying original sparse matrix :");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=0){
            size++;
    }
    }
}
printf("\nThe no of non zero elements: %d",size);

sp_a[0][0]=m;
sp_a[0][1]=n;
sp_a[0][2]=size;
 for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=0){
            sp_a[k][0]=i;
            sp_a[k][1]=j;
            sp_a[k][2]=a[i][j];
            k++;
        }
    }
}
printf("\n Spare matrix representaion :");
for(i=0;i<size+1;i++){
    for(j=0;j<3;j++){
        printf("%d\t",sp_a[i][j]);
    }
    printf("\n");
}
tr_sp_a[0][0]=n;
tr_sp_a[0][1]=m;
tr_sp_a[0][2]=size;
for(j=0;j<n;j++){
    for(i=0;i<size+1;i++){
        if(sp_a[i][1]==j){
            tr_sp_a[t][0]=sp_a[i][1];
            tr_sp_a[t][1]=sp_a[i][0];
            tr_sp_a[t][2]=sp_a[i][2];
            t++;
        }
    }
}
printf("\nTranspose of sparse matrix:");
for(i=0;i<size+1;i++){
    for(j=0;j<3;j++){
        printf("%d\t",tr_sp_a[i][j]);
    }
    printf("\n");
}
  return 0;
}