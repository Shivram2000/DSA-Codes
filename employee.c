#include <stdio.h> 
struct employee
{
  char name[10],gender[20],desig[20],dept[10];
    float gross,basic,hr,da;
};
int main()
{ 
int i,n;
struct employee emp[50];
printf("\nEnter the no of employee: ");
scanf("%d",&n);
printf("\nEnter the employee details;");
for(i=0;i<n;i++){
    printf("\nEnter the name of the employee:");
    scanf("%s",&emp[i].name);
    printf("\nEnter the gender of the employee:");
    scanf("%s",&emp[i].gender);
    printf("\nEnter the desig of the employee:");
    scanf("%s",&emp[i].desig);
    printf("\nEnter the dept of the employee:");
    scanf("%s",&emp[i].dept);
    printf("\nEnter the basic pay of the employee:");
    scanf("%f",&emp[i].basic);
}
printf("\n Display the employee details:\n");
for(i=0;i<n;i++){
printf("\nName=%s",emp[i].name);
printf("\ngender=%s",emp[i].gender);
printf("\ndesgin=%s",emp[i].desig);
printf("\ndept=%s",emp[i].dept);
printf("\nbasicpay=%.2f",emp[i].basic);
emp[i].hr=0.25*emp[i].basic;
printf("\nHR=%.2f",emp[i].hr);
emp[i].da=0.75*emp[i].basic;
printf("\nDA=%.2f",emp[i].da);
emp[i].gross=emp[i].basic+emp[i].hr+emp[i].da;
printf("\nGross pay=%.2f",emp[i].gross);
}
return 0;
}