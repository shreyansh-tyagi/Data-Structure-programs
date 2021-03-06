#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int);
struct node * delete_at_begin(struct node *,int );
void delete_at_end(struct node *,int );
void delete_at_both_begin_end(struct node *,int );
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
    root=delete_at_begin(root,n);
    delete_at_end(root,n);
    delete_at_both_begin_end(root,n);

}
struct node * delete_at_begin(struct node *root ,int n)
{
    struct node *temp=NULL,*q=NULL;
    temp=root->right;
    q=root->right;
    root->left=NULL;
    printf("\n\nAfter deletion from begining:\n\n");
    while(temp->right!=NULL)
    {
        printf("%d  ",temp->data );
        temp=temp->right;

    }
    printf("%d",temp->data);
    return q;
}
void delete_at_end(struct node *root,int n)
{
    struct node *temp=NULL;
    printf("\n\nAfter deletion from end:\n\n");
    while(root->right!=NULL)
    {
        printf("%d  ",root->data);
        root=root->right;
    }
    temp=root->left;
    temp->right=NULL;
}
void delete_at_both_begin_end(struct node *root,int n)
{
    struct node *temp=NULL;
    temp=root->right;
    printf("\n\nAfter deletion from both begining and end:\n\n");
    while(temp->right!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->right;
    }
}