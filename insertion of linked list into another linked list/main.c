#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *link;
    
};
struct node* insert(struct node*,int);
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL;
  int n,i;
  printf("\nenter the size of nodes: ");  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
      temp=(struct node *)malloc(sizeof(struct node));
      printf("enter the data into %d node: ",i);
      scanf("%d",&temp->data);
      temp->link=NULL;
      if(root==NULL){
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
  while(root->link!=NULL){
      printf("%d  ",root->data);
      root=root->link;
  }
  printf("%d",root->data);
  root=insert(root,n);
}
struct node * insert(struct node *root,int n)
{
    struct node *temp;
    int m,i;
    printf("enter the size of new node: ");
    scanf("%d",&m);
    temp=(struct node*)malloc(sizeof(struct node));

}