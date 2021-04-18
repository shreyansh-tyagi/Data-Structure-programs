#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void displaylink(struct node *root);
void insertatbeg(struct node *root);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL; //initially the value of all these variable is null
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
  insertatbeg(root);
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
void insertatbeg(struct node *root)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the new element that you want to insert at the beginning of node: ");
    scanf("%d",&temp->data);
    temp->link=root;
    root=temp;
    printf("after insertion: \n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);

}