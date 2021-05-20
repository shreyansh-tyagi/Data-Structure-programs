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
}
void selection_sort(int a[],int n)
{

}