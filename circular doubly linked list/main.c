#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data ;
    struct node *left,*right;
};
void display(struct node *);
void main()
{
    struct node *temp=NULL,*p=NULL,*q=NULL,*root=NULL;
    int i,n;
    printf("\n\nenter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node ));
        printf("enter the %d element into linked list: ");
        scanf("%d",temp->data);
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
    disp
}