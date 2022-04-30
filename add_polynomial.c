# include<stdio.h> 
struct polynomial{
    int expo;
    float coeff;
};
 struct polynomial p1[50],p2[50],sum[50];
int main()
{
int i,deg1,deg2,m=0;
printf("Enter the highest degree of first polynomial: ");
scanf("%d",&deg1);
 for(i=0;i<=deg1;i++){
     printf("Enter the cofficient x^%d: ",i);
     scanf("%f",&p1[i].coeff);
     p1[i].expo=i;
  }

  printf("Enter the highest degree of second polynomial: ");
  scanf("%d",&deg2);
  for(i=0;i<=deg2;i++){
      printf("Enter the cofficient x^%d: ",i);
      scanf("%f",&p2[i].coeff);
      p2[i].expo=i;
  }
 printf("\nExpression of 1st polynomial is %.2f",p1[0].coeff);
 for(i=1;i<=deg1;i++){
 printf("+%.1fx^%d",p1[i].coeff,p1[i].expo);
 }
printf("\nExpression of 2nd polynomial is %.2f",p2[0].coeff);
 for(i=1;i<=deg2;i++){
 printf("+%.1fx^%d",p2[i].coeff,p2[i].expo);
 }
if(deg1>deg2){
    for(i=0;i<=deg2;i++){
   sum[m].coeff=p1[i].coeff + p2[i].coeff;
        sum[m].expo=p1[i].expo;
        m++;
    }
    for(i=deg2+1;i<=deg1;i++){
        sum[m].coeff=p1[i].coeff;
        sum[m].expo=p1[i].expo;
        m++;
    }
}
else{
    for(i=0;i<=deg1;i++){
   sum[m].coeff=p1[i].coeff+p2[i].coeff;
        sum[m].expo=p1[i].expo;
        m++;
    }
    for(i=deg1+1;i<=deg2;i++){
        sum[m].coeff=p1[i].coeff;
        sum[m].expo=p1[i].expo;
        m++;
  }
}
 printf("\nThe sum of the two polynomial is :%.1f",sum[0].coeff);
 for(i=1;i<m;i++){
     printf("+%fx^%d",sum[i].coeff,sum[i].expo);
 }
    return 0;
}