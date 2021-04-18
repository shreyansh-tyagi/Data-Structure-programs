#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void displaylink(struct node *root);
void main()
{
  struct node *temp,*root,*p; //initially the value of all these variable is null
  int n,i;
  printf("enter the number of nodes: ");
  scanf("%d",&n);
  temp=(struct node*)malloc(sizeof(struct node ));  
  for(i=1;i<=n;i++)
  {
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
}
void displaylink(struct node *root)
{
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }

}