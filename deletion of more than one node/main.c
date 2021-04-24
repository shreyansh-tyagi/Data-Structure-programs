#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node * display(struct node*,int);
struct node * onedelete(struct node*,int);
struct node * moredelete(struct node*,int);
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
   root=display(root,n);
}
struct node * display(struct node *root,int n)
{
    struct node *temp=NULL;
    int a;
    temp=root;
    printf("\n\noriginal linked list:\n");
    while(temp->link!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
    printf("\n\nchoose from the menu:\n1.Do you want to delete one element press '1'\n2.Do you want to delete more than one elemnt press '2'\n3. press '0' to exit: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            root=onedelete(root,n);
            break;
        }
        case 2:
        {
            moredelete(root,n);
            break;
        }
        case 0:
        {
            printf("thanks for giving your time...goodbye");
            exit(1);
        }

    }
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
struct node * moredelete(struct node *root,int n)
{
    int pos,val,i,loc;
    struct node *temp=NULL,*p=NULL,*q=NULL;
    temp=root;
    q=root;
    printf("\n\nenter the position from where you want to delete the node: ");
    scanf("%d",&pos);
    printf("\n\nenter the number of node you want to delete: ");
    scanf("%d",&val);
    if(val>n){
        printf("please enter valid number of node ----total node availabe are %d",n);
        exit(1);
    }
    if(pos>1)
    {   
    loc=pos-1;
    for(i=1;i<loc;i++)
    {
        temp=temp->link;

    }
    p=temp;
    for(i=1;i<=val;i++)
    {
        p=p->link;
    }
    temp->link=p->link;
    while(q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->data);
    }
    if(pos==1)
    {
        for(i=1;i<=val;i++)
        {
            temp=temp->link;
        }
        q=temp;
        while(q->link!=NULL)
        {
            printf("%d  ",q->data);
            q=q->link;
        }
        printf("%d",q->data);
    }    
}
