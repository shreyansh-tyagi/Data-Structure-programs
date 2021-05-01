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
    struct node *temp=NULL,*p=NULL,*q=NULL,*root1=NULL,*temp1=NULL,*r=NULL;
    temp1=root;
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
    if((pos>1)&&(pos<n))
    {
        loc=pos-1;
        for(i=1;i<loc;i++)
        {
            temp1=temp1->right;        
        }
        q->right=temp1->right;
        r=temp->right;
        r->left=q;
        temp1->right=root1;
        root1->left=temp1;
        printf("\n\nforward traversing After insertion:\n\n");
        while(root->right!=NULL)
        {
            printf("%d  ",root->data);
            root=root->right;

        }
        printf("%d",root->data);
        printf("\n\nbackward traversing after insertion:\n\n");
        while(root->left!=NULL)
        {
            printf("%d  ",root->data);
            root=root->left;
        }
        printf("%d",root->data);
        return root;
    }
    else if(pos==1)
    {
        temp1=root1;
        struct node *q=NULL;
        q=root;
        r=root1;
        while(temp1->right!=NULL)
        {
            temp1=temp1->right;
        }
        temp1->right=root;
        root->left=temp1;
        printf("\n\nforward traversing After insertion:\n\n");
        while(r->right!=NULL)
        {
            printf("%d  ",r->data);
            r=r->right;
        }
        printf("%d",r->data);
        printf("\n\nbackward traversing After insertion:\n\n");
        while(r->left!=NULL)
        {
            printf("%d  ",r->data);
            r=r->left;
        }
        printf("%d",r->data);

    }
    else if(pos>=n)
    {
        r=root;
        while(r->right!=NULL)
        {
            r=r->right;
        }
        r->right=root1;
        root1->left=r;
        printf("\n\nforward traversing After insertion:\n\n");
        while(root->right!=NULL)
        {
            printf("%d  ",root->data);
            root=root->right;
        }
        printf("%d",root->data);
        printf("\n\nbackward traversing After insertion:\n\n");
        while(root->left!=NULL)
        {
            printf("%d  ",root->data);
            root=root->left;
        }
        printf("%d",root->data);
    }
}