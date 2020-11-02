#include<stdio.h>
#include<stdlib.h>
struct emp
{
int e_id;
char e_name[30];
float e_salary;
};
void main()
{
struct emp e[30];
int n,i;
printf("enter the value of n: ");
scanf("%d",&n);
printf("\n\n");
for(i=0;i<=n;i++)
{
printf("enter employee id: ");
scanf("%d",&e[i].e_id);
printf("\n\n");
printf("enter employee name: ");
//%s is used for string and while storing string no need to include ampersand(&)
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
printf("employee salary:%f\n\n",e[i].e_salary);
}
}
                                                     
