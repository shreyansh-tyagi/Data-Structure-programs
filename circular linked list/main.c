#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node * link;
};
void display(struct node *);
void main()
{
    struct node *temp=NULL,*root=NULL,*p=NULL;
    int n,i;
    printf("\n\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        printf("enter the %d element into linked list:",i);
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(root==NULL)
        {
            
        }
    }
}