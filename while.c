#include<stdio.h>
void main()
{
int i,n;
i=5;
printf("enter the value of n\n");
scanf("%d",&n);
while(i<=n)
{
printf("we are in while");
++i;
}
printf("we are not in while");
}
