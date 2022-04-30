#include <stdio.h> 
struct polynomial{
    int expo;
    float coeff;
};
 struct polynomial p1[50],p2[50],c[50];
int main()
{
int i,j,deg1,deg2,m=0;
printf("Enter the highest degree of first polynomial: ");
scanf("%d",&deg1);
 for(i=0;i<=deg1;i++){
     printf("Enter the cofficient x^%d: ",i);  
     scanf("%f",&p1[i].coeff);
     p1[i].expo=i;
  }

  printf("Enter the highest degree of second polynomial: ");
  scanf("%d",&deg2);
  for(j=0;j<=deg2;j++){
      printf("Enter the cofficient x^%d: ",j);
      scanf("%f",&p2[j].coeff);
      p2[j].expo=j;
  }
 printf("\nExpression of 1st polynomial is %.2f",p1[0].coeff);
 for(i=1;i<=deg1;i++){
 printf("+%.1fx^%d",p1[i].coeff,p1[i].expo);
 }
printf("\nExpression of 2nd polynomial is %.2f",p2[0].coeff);
 for(j=1;j<=deg2;j++){
 printf("+%.1fx^%d",p2[j].coeff,p2[j].expo);
 }
for(i=0;i<=deg1+deg2;i++){
    c[i].coeff=0;
}
for(i=0;i<=deg1;i++)
{
    for(j=0;j<=deg2;j++)
    {
        c[i+j].coeff=c[i+j].coeff+p1[i].coeff*p2[j].coeff;
        c[i+j].expo=p1[i].expo+p2[j].expo;
    }
  }
  printf("\nExpression after multiplication= %.2f", c[0].coeff);
  for(i=1;i<=deg1+deg2;i++){
      printf("+ %.2fx^%d",c[i].coeff,c[i].expo);
   }
return 0;
}
  