#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node link;
};
void display(struct node *,int );
void main()
{
    int n,i;
    struct node *root=NULL,*temp=NULL;
    printf("\n\nenter the size of linked list:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        printf("\n\nenter the coefficient:");
        scanf("%d",&temp->cof);
    }
}