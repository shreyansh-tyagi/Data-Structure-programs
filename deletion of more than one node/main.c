#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node * display(struct node*);
struct node * onedelete(struct node*,int);
void main()
{
    struct node *temp=NULL,*root=NULL,*ptr=NULL;
    int n,i;
    printf("enter the size of linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d element into linked list: ",i);
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(root==NULL)
        { 
            root=temp;

        }
        else{
            ptr=root;
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
        }
    }
   root=display(root);
   onedelete(root,n);

}
struct node * display(struct node *root)
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
    return root;

}
struct node * onedelete(struct node *root,int n)
{
    int pos,i,m,loc;
    struct node *temp=NULL,*p=NULL,*q=NULL;
    temp=root;
    p=root;
    q=root;
    printf("\n\nenter the position from where you want to delete the node: ");
    scanf("%d",&pos);
    if(pos>1){
    m=pos;
    loc=pos-1;
    for(i=1;i<loc;i++)
    {
        p=p->link;
    }
    for(i=1;i<=m;i++)
    {
        q=q->link;
    }
    p->link=q;
    printf("\n\nafter deletion from %d position:\n\n",pos);
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);

    }
    else if(pos==1)
    {
        temp=temp->link;
        printf("\n\nafter deletion from %d position:\n\n",pos);
        while(temp!=NULL)
        {
           printf("%d  ",temp->data);
           temp=temp->link;
        }
        printf("%d",temp->data);

    }
}
