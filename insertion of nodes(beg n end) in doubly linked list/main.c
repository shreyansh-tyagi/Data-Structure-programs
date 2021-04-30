#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int);
struct node * insert_at_begin(struct node *,int);
int  insert_at_end(struct node *,int );
struct node * insert_at_random(struct node *,int);
void main()
{
  int n,i;
  struct node *temp=NULL,*root=NULL,*p=NULL;  
    printf("\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d element in linked list: ",i);
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
    printf("\n\nforward traversing linked list:\n\n");
    while(temp->right!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->right;
    }
    printf("%d",temp->data);
    printf("\n\nbackward traversing linked list:\n\n");
    while(temp->left!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->left;
    }
    printf("%d",temp->data);
    root=insert_at_begin(root,n);
    n=insert_at_end(root,n);
    root=insert_at_random(root,n);
}
struct node * insert_at_begin(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n\nenter the new element that you want to insert at the begining: ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    p=root;
    temp->right=p;
    p->left=temp;
    q=temp;
    printf("\n\nAfter insertion at begin:\n\n");
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);
    return temp;
}
int insert_at_end(struct node *root ,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL;
    p=root;
    q=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nenter the element that you want to insert at the end of linked list: ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    p->right=temp;
    temp->left=p;
    printf("\n\nforward traversing After insertion at end:\n\n");
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);
    printf("\n\nbackward traversing After insertion at end:\n\n");
    while(q->left!=NULL)
    {
        printf("%d  ",q->data);
        q=q->left;
    }
    printf("%d",q->data);
    return n+2;

}
struct node * insert_at_random(struct node *root ,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL;
    int pos,i,loc=0;
    p=root;
    q=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nenter the position at which you want to insert the element: ");
    scanf("%d",&pos);
    printf("\nenter the element that you want to insert: ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if((pos>1)&&(pos<n))
    {
        loc=pos-1;
        for(i=1;i<loc;i++)
        {
            p=p->right;
        }
        temp->right=p->right;
        temp->left=p;
        p->right=temp;
        printf("\n\nAfter insertion at %d position:\n\n",pos);
        while(q->right!=NULL)
        {
            printf("%d  ",q->data);
            q=q->right;
        }
        printf("%d",q->data);
    }
    else if(pos==1)
    {
        temp->right=p;
    p->left=temp;
    q=temp;
    printf("\n\nAfter insertion at %d position:\n\n",pos);
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);
    return temp;

    }
   else if(pos>=n){
        while(p->right!=NULL)
    {
        p=p->right;
    }
    p->right=temp;
    temp->left=p;
    printf("\n\nAfter insertion at %d position:\n\n",pos);
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);

   }

}