#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int);
void sorting(struct node *,int);
void main()
{
    int n,i;
    struct node *temp=NULL,*root=NULL,*p=NULL;
    printf("\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
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
    sorting(root,n);
}
void sorting(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL;
    int i,j,temp1,temp2,m,a;
    printf("\n\nChoose from the menu:\n1. Ascending order sort, press '1'\n2. Descending order sort, press '2'\n3. To exit, press '0': ");
    scanf("%d",&a);
    q=root;
    m=n;
    switch(a)
    {
        case 1:
        {
        printf("\n\nAfter sorting in Ascending order:\n\n");
        for(i=1;i<=n;i++)
        {
        temp=root;
        p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=temp->right;
            temp2=p->data; 
            if(temp1>temp2)
            {
                temp->data=temp2;
                p->data=temp1;
            }
            temp=temp->right;
        }
    }
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);
    break;

        }

    case 2:
    {
        printf("\n\nAfter sorting in Descending order:\n\n");
    for(i=1;i<=n;i++)
    {
        temp=root;
        p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=temp->right;
            temp2=p->data; 
            if(temp1<temp2)
            {
                temp->data=temp2;
                p->data=temp1;
            }
            temp=temp->right;
        }
    }
    while(q->right!=NULL)
    {
        printf("%d  ",q->data);
        q=q->right;
    }
    printf("%d",q->data);
    break;
    }  
    case 0:
    {
        printf("\n\nthanks for giving your time ...goodbye!");
        exit(1);
    }
    default:
    {
        printf("\n\nplease enter the valid number from the menu...");
    }


    }
    
}