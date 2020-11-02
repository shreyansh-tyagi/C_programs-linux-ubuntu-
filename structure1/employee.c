#include<stdio.h>
#include<stdlib.h>
struct employee 
{
int e_id;
char e_name[30];
float e_salary,sum,avg;
};
void main()
{
struct employee e[50],c,d;
int n,i;
c.sum=0;
d.avg=0;
printf("enter the value of n");
scanf("%d",&n);
printf("\n\n");
for(i=0;i<=n;i++)
{
printf("enter employee id: ");
scanf("%d",&e[i].e_id);
printf("\n\n");
printf("enter employee name: ");
scanf("%s",e[i].e_name);
printf("\n\n");
printf("enter employee salary: ");
scanf("%f",&e[i].e_salary);
printf("\n\n");
}
for(i=0;i<=n;i++)
{
printf("employee id: %d\n\n",e[i].e_id);
printf("employee name: %s\n\n",e[i].e_name);
printf("employee salary: %f\n\n",e[i].e_salary);
}
for(i=0;i<=n;i++)
{
c.sum=c.sum+e[i].e_salary;
}
printf("sum:  %f\n\n",c.sum);
d.avg=c.sum/n;
printf("average:  %f\n\n",d.avg);
}

