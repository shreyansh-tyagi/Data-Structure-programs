#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int coff;
  int exp;
  struct node *link;
};
void display(struct node *,int );
void main()
{
  struct node *temp=NULL,*root=NULL,*p=NULL; 
  int n,i;
  printf("enter the number of nodes: ");
  scanf("%d",&n);  
  for(i=1;i<=n;i++)
  {
      temp=(struct node*)malloc(sizeof(struct node ));
      printf("enter the %d coefficent and %d exponent into the node: ",i,i);
      scanf("%d%d",&temp->coff,&temp->exp);
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
  display(root,n);
}
void display(struct node *root,int n)
{
    while(root->link!=NULL)
    {
        printf("%d X %d->  ",root->coff,root->exp);
        root=root->link;
    }
    printf("%d X %d->  ",root->coff,root->exp);

}  