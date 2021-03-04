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
    for(i=1;i<=n;i++)
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
    for(i=n;i>=1;i--)
    {
        printf(" %d",a[i]);
    }
}
void delete(int a[50],int n)
{
    int i,loc,key;
    printf("\n\nenter the location that you want to delete the element :  ");
    scanf("%d",&loc);
    if(loc<=n)
    {
        key=a[loc];
        printf("\n\nthe deleted element is : %d",key);
    for(i=loc;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nafter deletion the array is: ");
    for(i=1;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    }
    else{
        printf("out of memory");
    }
}