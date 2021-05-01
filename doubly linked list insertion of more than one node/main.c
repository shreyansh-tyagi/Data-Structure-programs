#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int );
struct node * insert_more_than_one(struct node * ,int );
void reverse(struct node *,int);
void main()
{
    int n,i;
    struct node *temp=NULL,*root=NULL,*p=NULL;
    printf("\n\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d element into linked list: ",i);
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
void display(struct node *root ,int n)
{
    
    struct node *temp=NULL,*temp1=NULL;
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
    
   root =insert_more_than_one(root ,n);
}
struct node * insert_more_than_one(struct node *root ,int n)
{
    int pos,loc,m,i;
    struct node *temp=NULL,*p=NULL,*q=NULL,*root1=NULL;
    printf("\n\nenter the size of new linked list: ");
    scanf("%d",&m);
    printf("\n\nenter the position where you want to insert the new linked list: ");
    scanf("%d",&pos);
    for(i=1;i<=m;i++)
    {
      temp=(struct node *)malloc(sizeof(struct node));
      printf("enter the %d data in new linked list: ",i);
      scanf("%d",&temp->data);
      temp->left=NULL;
      temp->right=NULL;
      if(root1==NULL)
      {
          root1=temp;
          q=temp;
      }
      else{
          p=root1;
          while(p->right!=NULL)
          {
              p=p->right;
          }
          p->right=temp;
          temp->left=p;
      }
    }
    printf("\n\nsecond linked list:\n\n");
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);
}