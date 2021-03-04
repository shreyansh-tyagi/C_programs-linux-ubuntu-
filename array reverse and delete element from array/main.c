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
    printf("\nenter the value into the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    delete(a,n);

}
void reverse(int a[50],int n)
{
    int i;
    printf("\n\nreverse of array is: ");
    for(i=n-1;i>0;i--)
    {
        printf(" %d",a[i]);
    }
}
void delete(int a[50],int n)
{
    int i;
    printf("\n\nreverse of array is: ");
    for(i=n-1;i>0;i--)
    {
        printf(" %d",a[i]);
    }
}