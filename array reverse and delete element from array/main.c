#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(int [],int);
void delete(int[],int);
void main()
{
    int a[50],n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the value into the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    delete(a,n);

}