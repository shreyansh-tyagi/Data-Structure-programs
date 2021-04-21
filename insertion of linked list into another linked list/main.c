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
  struct node *temp=NULL,*root=NULL,*p=NULL,*root1=NULL;
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
          root1=temp;
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
  while(root1->link!=NULL){
      printf("%d  ",root1->data);
      root1=root1->link;
  }
  printf("%d",root1->data);
  root=insert(root,n);
}
struct node * insert(struct node *root,int n)
{
    struct node *temp=NULL,*p=NULL,*ptr=NULL,*linknode=NULL,*temp1=NULL,*root1=NULL,*ptr=NULL;
    root1=root;
    int m,i,pos;
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
        ptr=temp;
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
    printf("\nenter the position from where you want to insert the new node to existing node: ");
    scanf("%d",&pos);
    if(pos>1)
    {
    pos=pos-1;
    for(i=1;i<pos;i++)
    {
        root1=root1->link;
    }
    temp1=root1->link;
    root1->link=p;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp1;
    printf("\n\nafter insertion:\n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
    }
    else if(pos==1)
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=root1;
        while(ptr->link!=NULL)
        {
            printf("%d  ",ptr->data);
            ptr=ptr->link;
        }
        
    }
   

}