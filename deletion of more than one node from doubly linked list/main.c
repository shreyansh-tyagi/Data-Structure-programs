#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int );
struct node * delete_at_random(struct node *,int );
void main()
{
    int n,i;
  struct node *temp=NULL,*root=NULL,*p=NULL;  
    printf("\n\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        printf("enter the %d data into the linked list: ",i);
        scanf("%d",&temp->data);
        temp->left=NULL;
        temp->right=NULL;
        if(root==NULL)
        {
            root=temp;

        }
        else{
            p=root;
            while(p->right!=NULL)
            {
                p=p->right;
            }
            p->right=temp;
            temp->left=p;
        }
    }
    display(root,n);
}
void display(struct node *root,int n)
{
    struct node *temp=NULL;
    temp=root;
    printf("\n\noriginal linked list:\n\n");
    while(temp->right!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->right;
    }
    printf("%d",temp->data);
    root=delete_at_random(root,n);
}
struct node * delete_at_random(struct node *root ,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL,*r=NULL;
    temp=root;
    r=root;
    int pos,i;
    printf("\n\nenter the position from where you want to delete the node from linked list: ");
    scanf("%d",&pos);
    if((pos>1)&&(pos<n))
    {
        for(i=1;i<pos;i++)
        {
            temp=temp->right;
        }
        p=temp->right;
        q=temp->left;
        q->right=p;
        p->left=q;
        printf("\n\nforward traversing After deletion from %d position:\n\n",pos);
        while(r->right!=NULL)
        {
            printf("%d  ",r->data);
            r=r->right;
        }
        printf("%d",r->data);
        printf("\n\nforward traversing After deletion from %d position:\n\n",pos);
        while(r->left!=NULL)
        {
            printf("%d  ",r->data);
            r=r->left;
        }
        printf("%d",r->data);

    }
}