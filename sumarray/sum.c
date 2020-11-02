#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,a[50],n,sum,sub,mul,large,small;
sum=0;
sub=0;
mul=1;
large=a[0];
small=a[0];
printf("enter the vale of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the elements into array:");
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
printf("array elements are :%d\n",a[i]);
}
for(i=1;i<=n;i++)
{
sum=sum+a[i];
sub=sub-a[i];
mul=mul*a[i];
}
printf("the sum is : %d\n",sum);
printf("the substraction is : %d\n",sub);
printf("the multiplication is: %d\n",mul);
for(i=1;i<=n;i++)
{
if(a[i]>large)
{
large=a[i];
}
}
printf("largest number is : %d\n",large);
for(i=1;i<=n;i++)
{
if(a[i]<small)
{
small=a[i];
}
}
printf("smallest number is : %d",small);
}





























