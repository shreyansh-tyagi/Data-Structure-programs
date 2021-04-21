#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *link;
};
struct node * delete(struct node *,int);
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
          q=temp;
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
  while(q->link!=NULL)
  {
      printf("%d  ",q->data);
      q=q->link;
  }
  printf("%d",q->data);
  free(q);
  temp1=delete(root,n);
}
struct node * delete(struct node *root,int n)
{
    struct node *temp=NULL,*q=NULL;
  printf("\n\nafter deletion from first position:\n\n");
  temp=root;
  q=temp->link;
  temp=q;
  while(q->link!=NULL){
      printf("%d  ",q->data);
      q=q->link;
  }
  printf("%d",q->data);
  free(root);
  free(q);
  return temp;
}