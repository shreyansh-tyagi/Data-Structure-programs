#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node *link;
};
void display(struct node *,int );
void main()
{
    int n,i;
    struct node *root=NULL,*temp=NULL,*p=NULL;
    printf("\n\nenter the size of linked list:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        printf("\n\nenter the %d coefficient:",i);
        scanf("%d",&temp->cof);
        printf("\nenter the %d exponent",i);
        scanf("%d",&temp->exp);
        temp->link=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else{
            p=root;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    display(root,n);
}
void display(struct node *root ,int n)
{
    struct node *temp=NULL;
    temp=root;
    printf("\n\nfirst polynomial equation:\n\n");
    while(temp->link!=NULL)
    {
        printf("%dx^%d  ",temp->cof,temp->exp);
        temp=temp->link;
    }
    printf("%dx^%d",temp->cof,temp->exp);
}