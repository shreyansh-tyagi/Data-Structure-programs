#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  push(int);
void main()
{
    int i,n,ele,top=-1;
    printf("\n\nenter the size of stack: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the %d value into stack: ");
        scanf("%d",&ele);
        push(ele);
    }

}