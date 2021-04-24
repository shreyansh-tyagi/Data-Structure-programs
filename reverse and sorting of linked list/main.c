#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void reverse(struct node *,int);
void sort(struct node *,int);
void display(struct node *,int);
void main()
{
    int n,i;
    struct node *temp=NULL,*root=NULL,*p=NULL;
    printf("\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d data into linked list: ",i);
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(root==NULL)
        root=temp;
        else
        {
            p=root;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    display(root,n);
}
void display(struct node *root,int n)
{
    struct node *temp=NULL;
    int a;
    temp=root;
    printf("\noriginal list:\n");
    while(temp->link!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
    printf("\n\nChoose from the menu:\n1. Do you want to reverse the linked list, press '1'\n2. Do you want to sort the linked list, press '2'\n3. press '0' to exit:  ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        {
            reverse(root,n);
            break;
        }
        case 2:
        {
            sort(root,n);
            break;
        }
        case 0:
        {
            printf("\n\nthanks for giving you time...goodbye!");
            exit(1);
        }
        default:
        {
            printf("\nplease enter the valid number from the menu");
            exit(1);
        }
    }
}
void reverse(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL;
    int i,j,temp1,temp2,m;
    printf("\nafter reversing the linked list is:\n\n");
    m=n;
    q=root;
    for(i=1;i<=n;i++)
    {
        temp=root;
         p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=p->link;
            temp2=p->data;
            temp->data=temp2;
            p->data=temp1;
            temp=temp->link;

        }
        m--;
    }
    while (q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->data);
}
void sort(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL;
    int i,j,temp1,temp2,m;
    q=root;
    m=n;
    printf("\n\nafter sorting:\n\n");
    for(i=1;i<=n;i++)
    {
        temp=root;
        p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=temp->link;
            temp2=p->link;
            if(temp1>temp2)
            {
                temp->data=temp2;
                p->data=temp1;
            }
            temp=temp->link;
            p=p->link;

        }
    }
    while(q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->link);
}
