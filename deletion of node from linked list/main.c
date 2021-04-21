#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *link;
};
void display(struct node *);
struct node * delete(struct node *,int);
void displaybegindelete(struct node *);
void lastdelete(struct node *);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL,*q=NULL,*temp1=NULL;
  int n,i;
  printf("\nenter the size of linked list: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      temp=(struct node*)malloc(sizeof(struct node));
      printf("enter the %d data into linked list: ",i);
      scanf("%d",&temp->data);
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
  display(root);
  temp1=delete(root,n);
  displaybegindelete(temp1);
  lastdelete(root);
}
void display(struct node *root)
{
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);

}
 
struct node * delete(struct node *root,int n)
{
    struct node *temp=NULL;
  printf("\n\nafter deletion from first position:\n\n");
  temp=root;
  root=temp->link;
  free(temp);
  return root;
}
void displaybegindelete(struct node *root)
{
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
}
void lastdelete(struct node *root)
{
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    free(root);
}