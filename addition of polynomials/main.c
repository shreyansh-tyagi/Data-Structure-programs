#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node *link;
};
struct node *r=NULL;
void display(struct node *,struct node * );
struct node * insert(int,int);
void insertdisplay(struct node *);
void addition(struct node *,struct node *);
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
    addition(root,root1);
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
struct node * insert(int a,int b)
{
    struct node *temp=NULL,*p=NULL;
    temp=(struct node*)malloc(sizeof(struct node ));
    temp->cof=a;
    temp->exp=b;
    temp->link=NULL;
        if(r==NULL)
        {
            r=temp;
        }
        else{
            p=r;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }  
        return r;   
}
void addition(struct node *root,struct node *root1)
{
    struct node *s=NULL;
   while((root!=NULL)&&(root1!=NULL))
    {
        if(root->exp>root1->exp)
        {
            s=insert(root->cof,root->exp);
            root=root->link;
        }
        else if(root1->exp>root->exp)
        {
            s=insert(root1->cof,root1->exp);
            root1=root1->link;
        }
        else
        {
            s=insert(root->cof+root1->cof,root->exp);
            root=root->link;
            root1=root1->link;
        }
    }
    insertdisplay(s);
    
}
void insertdisplay(struct node *root)
{
    printf("\n\nAfter addition of two polynomial:\n\n");
     while (root!=NULL)
    {
        printf("%dx^%d ",root->cof,root->exp);
        root=root->link;
    }
}