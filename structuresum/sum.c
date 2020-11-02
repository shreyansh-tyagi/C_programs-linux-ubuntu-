#include<stdio.h>
#include<stdlib.h>
// global declaration
struct add
{
int sum;
};
void main()
{
struct add a[20],c;
c.sum=0;
int n,i;
printf("enter the value of n: ");
scanf("%d",&n);
printf("\n\n");
for(i=0;i<=n;i++)
{
printf("enter the elements into array: ");
scanf("%d",&a[i].sum);
}
printf("\n\n");
printf("array in structure elements: \n\n");
for(i=0;i<=n;i++)
{
printf("  %d",a[i].sum);
}
printf("\n\n");
printf("sum: ");
for(i=0;i<=n;i++)
{
c.sum=c.sum+a[i].sum;
}
printf("%d",c.sum);
printf("\n\n");
}

