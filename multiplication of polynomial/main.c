#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int cof,exp;
    struct node *link;
};
struct node *r=NULL,*r1=NULL;
void display(struct node *,struct node *,int,int);
struct node * insert(int,int);
void insertdisplay(struct node *);
void mulpoly(struct node *,struct node *,int,int);
struct node * complete_insert(int,int);
void complete_mul_add(struct node *);
void comdisplay(struct node *);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL,*temp1=NULL,*root1=NULL,*p1=NULL;  
  int n,m,i;
    printf("\n\nenter the size of first polynomial: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node ));
        printf("enter the %d coefficient into first linked list: ",i);
        scanf("%d",&temp->cof);
        printf("enter the %d exponent into first linked list: ",i);
        scanf("%d",&temp->exp);
        printf("\n");
        temp->link=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else{
            p=root;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    printf("\n\nenter the size of second polynomial: ");
    scanf("%d",&m);
    printf("\n\n");
    for(i=1;i<=m;i++)
    {
        temp1=(struct node*)malloc(sizeof(struct node ));
        printf("enter the %d coefficient into first linked list: ",i);
        scanf("%d",&temp1->cof);
        printf("enter the %d exponent into first linked list: ",i);
        scanf("%d",&temp1->exp);
        printf("\n");
        temp1->link=NULL;
        if(root1==NULL)
        {
            root1=temp1;
        }
        else{
            p1=root1;
            while(p1->link!=NULL)
            {
                p1=p1->link;
            }
            p1->link=temp1;
        }
    }
    display(root,root1,n,m);
    mulpoly(root,root1,n,m);
}
void display(struct node *root,struct node *root1,int n,int m)
{
    struct node *temp=NULL,*temp1=NULL;
    temp=root;
    temp1=root1;
    printf("\n\nfirst polynomial:\n\n");
    while (temp->link!=NULL)
    {
        printf("%dx^%d ",temp->cof,temp->exp);
        temp=temp->link;
    }
    printf("%dx^%d",temp->cof,temp->exp);
    
    printf("\n\nsecond polynomial:\n\n");
    while (temp1->link!=NULL)
    {
        printf("%dx^%d ",temp1->cof,temp1->exp);
        temp1=temp1->link;
    }
    printf("%dx^%d",temp1->cof,temp1->exp);
}
struct node * insert(int a,int b)
{
    struct node *temp=NULL,*p=NULL;
    temp=(struct node*)malloc(sizeof(struct node ));
    temp->cof=a;
    temp->exp=b;
    temp->link=NULL;
        if(r==NULL)
        {
            r=temp;
        }
        else{
            p=r;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }  
        return r;   
}
void mulpoly(struct node *root,struct node *root1,int n ,int m)
{
    struct node *temp=NULL,*temp1=NULL,*p=NULL;
    int a,b;
    temp=root;
    temp1=root1;
    while(temp1!=NULL)
    {
        while(temp!=NULL)
        {
            a=temp1->cof*temp->cof;
            b=temp1->exp+temp->exp;
            p=insert(a,b);
            temp=temp->link;
        }
        temp=root;
        temp1=temp1->link;
    }
    insertdisplay(p);
    complete_mul_add(p);
}
void insertdisplay(struct node *root)
{
    printf("\n\nAfter multiplying two polynomial:\n\n");
     while (root!=NULL)
    {
        printf("%dx^%d ",root->cof,root->exp);
        root=root->link;
    }
}
struct node * complete_insert(int a,int b)
{
     struct node *temp=NULL,*p=NULL;
    temp=(struct node*)malloc(sizeof(struct node ));
    temp->cof=a;
    temp->exp=b;
    temp->link=NULL;
        if(r1==NULL)
        {
            r1=temp;
        }
        else{
            p=r1;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
         printf("\n\nfinal output After multiplying and addition two polynomial:\n\n");
     while (r1!=NULL)
    {
        printf("%dx^%d ",r1->cof,r1->exp);
        r1=r1->link;
    }  
        return r1; 

}
void complete_mul_add(struct node *root)
{
    struct node *p=NULL,*q=NULL,*s=NULL;
    q=root;
    while(root!=NULL)
    {
        p=root;
        while(q!=NULL)
        {
            q=q->link;
            if(p->exp==q->exp)
            {
                p->cof=p->cof+q->cof;
            }
            else{
                p->cof=p->cof;
            }
        }
        s=complete_insert(p->cof,p->exp);
        root=root->link;
        q=root;

    }
    comdisplay(s);

}
void comdisplay(struct node *root)
{
    printf("\n\nfinal output After multiplying and addition two polynomial:\n\n");
     while (root!=NULL)
    {
        printf("%dx^%d ",root->cof,root->exp);
        root=root->link;
    }
}