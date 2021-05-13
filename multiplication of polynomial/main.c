#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node *link;
};
void display(struct node *,struct node *,int,int);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL,*temp1=NULL,*root1=NULL,*p1=NULL;  
  int n,m,i;
    printf("\n\nenter the size of first polynomial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node ));
        printf("enter the %d coefficient into first linked list: ");
        scanf("%d",&temp->cof);
        printf("\nenter the %d exponent into first linked list: ");
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
    printf("\n\nenter the size of second polynomial: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        temp1=(struct node*)malloc(sizeof(struct node ));
        printf("enter the %d coefficient into first linked list: ");
        scanf("%d",&temp1->cof);
        printf("\nenter the %d exponent into first linked list: ");
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
    display(root,root1,n,m);
}
void display(struct node *root,struct node *root1,int n,int m)
{
    
}