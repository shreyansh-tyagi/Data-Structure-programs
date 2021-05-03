#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void display(struct node *,int );
void delete_at_random(struct node *,int );
void delete_more_than_one(struct node *,int);
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
    int a;
    printf("\n\noriginal linked list:\n\n");
    while(temp->right!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->right;
    }
    printf("%d",temp->data);
    printf("\n\nchoose from the menu:\n1.Do you want to delete one element press '1'\n2.Do you want to delete more than one elemnt press '2'\n3. press '0' to exit: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            delete_at_random(root,n);
            break;
        }
        case 2:
        {
            delete_more_than_one(root,n);
            break;
        }
        case 0:
        {
            printf("thanks for giving your time...goodbye");
            exit(1);
        }
        default:
        {
            printf("\nplease enter the valid number from the menu");
            exit(1);
        }

    }
}
void delete_at_random(struct node *root ,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL,*r=NULL;
    temp=root;
    r=root;
    int pos,i;
    printf("\n\nenter the position from where you want to delete one node from linked list: ");
    scanf("%d",&pos);
    if((pos>1)&&(pos<n))
    {
        for(i=1;i<pos;i++)
        {
            temp=temp->right;
        }
        p=temp->right;
        q=temp->left;
        q->right=p;
        p->left=q;
        printf("\n\nforward traversing After deletion from %d position:\n\n",pos);
        while(r->right!=NULL)
        {
            printf("%d  ",r->data);
            r=r->right;
        }
        printf("%d",r->data);
        printf("\n\nbackward traversing After deletion from %d position:\n\n",pos);
        while(r->left!=NULL)
        {
            printf("%d  ",r->data);
            r=r->left;
        }
        printf("%d",r->data);
    }
    else if(pos==1)
    {
        temp=temp->right;
        temp->left=NULL;
        r=temp;
         printf("\n\nforward traversing After deletion from %d position:\n\n",pos);
        while(r->right!=NULL)
        {
            printf("%d  ",r->data);
            r=r->right;
        }
        printf("%d",r->data);
        printf("\n\nbackward traversing After deletion from %d position:\n\n",pos);
        while(r->left!=NULL)
        {
            printf("%d  ",r->data);
            r=r->left;
        }
        printf("%d",r->data);
    }
    else if(pos>=n)
    {
        p=temp;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        q=p->left;
        q->right=NULL;
        p->left=NULL;
        printf("\n\nforward traversing After deletion from %d position:\n\n",pos);
        while(r->right!=NULL)
        {
            printf("%d  ",r->data);
            r=r->right;
        }
        printf("%d",r->data);
        printf("\n\nbackward traversing After deletion from %d position:\n\n",pos);
        while(r->left!=NULL)
        {
            printf("%d  ",r->data);
            r=r->left;
        }
        printf("%d",r->data);
    }
}
void delete_more_than_one(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*q=NULL,*r=NULL,*s=NULL;
    temp=root;
    int pos,loc,i,val;
    printf("\n\nenter the position from where you want to delete more than one node: ");
    scanf("%d",&pos);
    printf("\n\nenter the number of node that you want to delete: ");
    scanf("%d",&val);
    if((pos>1)&&(pos<n)) 
    {
        p=temp;
        for(i=1;i<pos;i++)
        {
            p=p->right;
        }
        q=p;
        for(i=1;i<val;i++)
        {
            p=p->right;
        }
        if(p->right!=NULL)
        {
        r=q->left;
        s=p->right;
        r->right=s;
        s->left=r;
        
        printf("\n\nforward traversing After deletion of %d nodes from %d position:\n\n",val,pos);
        while(temp->right!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->right;
        }
        printf("%d",temp->data);
        printf("\n\nbackward traversing After deletion of %d nodes from %d position:\n\n",val,pos);
         while(temp->left!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->left;
        }
        printf("%d",temp->data);
        }
        else{
            r=q->right;
            r->left=NULL;
            q->right=NULL;
            
        printf("\n\nforward traversing After deletion of %d nodes from %d position:\n\n",val,pos);
        while(temp->right!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->right;
        }
        printf("\n\nbackward traversing After deletion of %d nodes from %d position:\n\n",val,pos);
         while(temp->left!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->left;
        }
        }

    }
    else if(pos==1)
    {
        p=temp;
        for(i=1;i<val;i++)
        {
            p=p->right;
        }
        q=p->right;
        q->left=NULL;
        p->left=NULL;
        p->right=NULL;
         printf("\n\nforward traversing After deletion of %d nodes from %d position:\n\n",val,pos);
         while(q->right!=NULL)
         {
             printf("%d  ",q->data);
             q=q->right;
         }
         printf("%d",q->data);
          printf("\n\nbackward traversing After deletion of %d nodes from %d position:\n\n",val,pos);
           while(q->left!=NULL)
         {
             printf("%d  ",q->data);
             q=q->left;
         }
         printf("%d",q->data);

    }
}