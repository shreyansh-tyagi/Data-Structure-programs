#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *link;
};
void display(struct node *root ,int n);
void main()
{
    struct node *temp=NULL,*root=NULL,*p=NULL;
    int i,n;
    printf("enter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d data into the linked list: ",i);
        scanf("%d",&temp->data);
       // temp->link=NULL;
        if(root==NULL)
        root=temp;
        else{
            p=root;
            while (p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
            
        }

    }
    display(root,n);
    
}
void display(struct node *root ,int n)
{
    struct node *temp=NULL;
    temp=root;
    printf("\n\noriginal linked list:\n");
    while(temp->link!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
}