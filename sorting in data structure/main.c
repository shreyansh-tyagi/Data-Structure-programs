#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void selection_sort(int [],int);
void bubble_sort(int [],int);
void main()
{
    int a[50],n;
    
    printf("\n\nenter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the element into array: ");
        scanf("%d",&a[i]);
    }
    printf("\n\nArray is:\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    selection_sort(a,n);
    bubble_sort(a,n);
}
void selection_sort(int a[],int n)
{
    int i ,j,min,temp;
    for(i=0;i<n;i++)
    {
    min=i;
    for(j=0;j<n;j++)
    {
        if(a[j]<a[min])
        {
            min=j;
        }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }
    printf("\n\nsorting after selection sort:\n\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    printf("\n\nsorting after bubble sort:\n\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

}