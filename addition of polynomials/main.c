#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node *link;
};
void display(struct node *,struct node * );
void addition(struct node *,struct node *,int ,int );
void main()
{
    int n,i,m;
    struct node *root=NULL,*temp=NULL,*p=NULL,*root1=NULL,*temp1=NULL,*p1=NULL;
    printf("\n\nenter the size of first polynomial equation: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        printf("\nenter the %d coefficient: ",i);
        scanf("%d",&temp->cof);
        printf("enter the %d exponent: ",i);
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
     printf("\n\nenter the size of second polynomial equation: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        temp1=(struct node *)malloc(sizeof(struct node ));
        printf("\nenter the %d coefficient: ",i);
        scanf("%d",&temp1->cof);
        printf("enter the %d exponent: ",i);
        scanf("%d",&temp1->exp);
        temp1->link=NULL;
        if(root1==NULL)
        {
            root1=temp1;
        }
        else{
            p1=root1;
            while(p1->link!=NULL)
            {
                p1=p1->link;
            }
            p1->link=temp1;
        }
    }
    display(root,root1);
    addition(root,root1,n,m);
}
void display(struct node *root ,struct node *root1)
{
    struct node *temp=NULL,*temp1=NULL;
    temp=root;
    temp1=root1;
    printf("\n\nfirst polynomial equation:\n\n");
    while(temp->link!=NULL)
    {
        printf("%dx^%d + ",temp->cof,temp->exp);
        temp=temp->link;
    }
    printf("%dx^%d",temp->cof,temp->exp);
     printf("\n\nsecond polynomial equation:\n\n");
    while(temp1->link!=NULL)
    {
        printf("%dx^%d + ",temp1->cof,temp1->exp);
        temp1=temp1->link;
    }
    printf("%dx^%d",temp1->cof,temp1->exp);
}
void addition(struct node *root,struct node *root1,int n,int m)
{
    printf("\n\nAfter addition of two polynomial:\n\n");
    struct node *temp=NULL,*p=NULL,*q=NULL;
    while((root->link)||(root1->link))
    {
        temp=(struct node *)malloc(sizeof(struct node));
        if(root->exp>root1->exp)
        {
            temp->cof=root->cof;
            temp->exp=root->exp;
            root=root->link;
            printf("%dx^%d ",temp->cof,temp->exp);
        }
        else if(root1->exp>root->exp)
        {
            temp->cof=root1->cof;
            temp->exp=root1->exp;
            root1=root->link;
            printf("%dx^%d ",temp->cof,temp->exp);
        }
        else if(root->exp==root1->exp)
        {
            temp->cof=root->cof+root1->cof;
            temp->exp=root->exp;
            root=root->link;
            root1=root1->link;
            printf("%dx^%d ",temp->cof,temp->exp);
        }

    }
    }
}