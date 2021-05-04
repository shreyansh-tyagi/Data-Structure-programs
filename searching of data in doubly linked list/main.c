#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int);
void search(struct node *,int);
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
    search(root ,n);
}
void search(struct node *root,int n)
{
    while(1) 
    {
    int b;
    printf("\n\nTO EXIT, Press '0', OTHERWISE Press any number to continue: ");
    scanf("%d",&b);   
    switch(b)
    {
        case 0:
        exit(1);
    } 
    struct node *temp=NULL;
    temp=root;
    int a,i,count=0;
    printf("\n\nenter the number that you want to search: ");
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(a==temp->data)
        {
            printf("\n%d is present at %d position",a,i);
            count++;
        }
        temp=temp->right;
    }
    if(count==0)
    {
    printf("\n%d is not present in linked list",a);
    printf("\nplease try another number");
    }
    }

}