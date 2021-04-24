#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void reverse(struct node *,int);
void sort(struct node *,int);
void main()
{
    int n,i;
    struct node *temp=NULL,*root=NULL,*p=NULL;
    printf("enter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\n\nenter the %d data into linked list",i);
        scanf("%d",&temp->data);
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
}