#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void displaylink(struct node *root);
struct node * insertatbeg(struct node *root);
struct node * insertatend(struct node *root);
void insertanywhere(struct node *root,int);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL; 
  struct node *insertend;
  //initially the value of all these variable is null
  int n,i;
  printf("enter the number of nodes: ");
  scanf("%d",&n);  
  for(i=1;i<=n;i++)
  {
      temp=(struct node*)malloc(sizeof(struct node ));
      printf("enter the %d element into the node: ",i);
      scanf("%d",&temp->data);
      temp->link=NULL;
      if(root==NULL)
      {
          root=temp;
      }
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
  displaylink(root);
  root=insertatbeg(root);
  insertend=insertatend(root);
  insertanywhere(root,n);
}
void displaylink(struct node *root)
{
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);

}
struct node * insertatbeg(struct node *root)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n\nenter the new element that you want to insert at the beginning of node: ");
    scanf("%d",&temp->data);
    temp->link=root;
    root=temp;
    printf("after insertion at begining: \n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
    return temp;

}
struct node * insertatend(struct node *root)
{
    struct node *temp,*p;
    p=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nenter the element that you want to insert at the end of node: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    while(root->link!=NULL){
        root=root->link;
    }
    root->link=temp;
    printf("\n\nafter insertion at end:\n\n");
    while(p->link!=NULL)
    {
        printf("%d  ",p->data);
        p=p->link;
    }
    printf("%d",p->data);

return temp;

}
void insertanywhere(struct node *root,int m)
{
    int n,i;
    struct node *temp,*p,*print;
    p=root;
    print=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nenter the position from at which you want to insert: ");
    scanf("%d",&n);
    printf("enter the new element that you want to insert at %d position: ",n);
    scanf("%d",&temp->data);
    if((n>1) &&(n<=m+2))
    {
    for(i=1;i<n;i++)
    {
        root=root->link;
    }
    temp->link=root;
    for(i=1;i<n;i++)
    {
        if(p->link==temp->link)
        {
            p->link=temp;
        }
        p=p->link;

    }
    printf("\n\nafter insertion:\n\n");
    while(print->link!=NULL)
    {
        printf("%d  ",print->data);
        print=print->link;
    }
    printf("%d",print->data);

    }
    if(n==1)
    {

    }
    
}