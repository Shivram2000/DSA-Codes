#include <stdio.h> 
struct distance{
    int km;
    int m;
};
struct distance add(struct distance d1 ,struct distance d2)
{
    struct distance sum;
    sum.m=d1.m+d2.m;
    sum.km=d1.km+d2.km;
    if(sum.m>=1000){
        sum.m=sum.m%1000;
        sum.km=sum.km+1;
    }
}
int main()
{
struct distance d1,d2,sum;
printf("\nEnter the first distance in km and m:\t");
scanf("%d%d",&d1.km,&d1.m);
printf("\nEnter the second distance in km and m:\t");
scanf("%d%d",&d2.km,&d2.m);
sum=add(d1,d2);
printf("\n The sum of two distance is %dkm %dm",sum.km,sum.m);
    return 0;
}