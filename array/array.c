#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[8]={29,43,52,73,83,32,21,87};
int i,large,small;
large=a[0];
small=a[0];
for(i=1;i<8;i++)
{
if(a[i]>large)
{
large=a[i];
}
if(a[i]<small)
{
small=a[i];
}
}
printf("largest value in the array is:%d\n",large);
printf("smallest value in the array is:%d\n",small);
}
