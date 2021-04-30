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
}
struct node * insert_at_begin(struct node *root,int n)
{
    
}