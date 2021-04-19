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
  printf("\nfirst node:\n\n");
  while(root->link!=NULL){
      printf("%d  ",root->data);
      root=root->link;
  }
  printf("%d",root->data);
  root=insert(root,n);
}
struct node * insert(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*ptr=NULL,*linknode=NULL;
    int m,i;
    printf("\n\nenter the size of new node: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data into %d node of new linked list: ",i);
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(p==NULL)
    {
        p=temp;
        linknode=temp;
    }
    else{
        ptr=p;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;

    }
    }
    printf("\n\nsecond node: \n\n");
     while(linknode->link!=NULL)
    {
        printf("%d  ",linknode->data);
        linknode=linknode->link;
    }
    printf("%d",linknode->data);
   

}