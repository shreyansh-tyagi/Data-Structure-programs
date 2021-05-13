#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node *link;
};
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL,*q=NULL;  
  int n,m,i;
    printf("\n\nenter the size of first linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node ));
        printf("enter the %d coefficient into first linked list: ");
        scanf("%d",&temp->cof);
        printf("\nenter the %d exponent into first linked list: ");
        scanf()
    }
}