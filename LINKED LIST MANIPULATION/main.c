#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void switch_print(struct node *,int);
void display(struct node *,int);
void insert_at_begin(struct node *,int);
void insert_at_end(struct node *,int);
void insert_at_random_position(struct node *,int);
void insert_more_than_one(struct node *,int);
void delete_at_begin(struct node *,int);
void delete_at_end(struct node *,int);
void delete_both_begin_end(struct node *,int);
void delete_at_random(struct node *,int);
void delete_more_than_one(struct node *,int);
void reverse(struct node *,int);
void sorting(struct node *,int);
void searching(struct node *,int);
void main()
{
    struct node *temp=NULL,*root=NULL,*p=NULL;
     int n,i;
  printf("Enter the number of nodes: ");
  scanf("%d",&n);  
  for(i=1;i<=n;i++)
  {
      temp=(struct node*)malloc(sizeof(struct node ));
      printf("Enter the %d element into the node: ",i);
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
  switch_print(root,n);
}
void switch_print(struct node *root,int n)
{
    int a;
    printf("\n\n------PLEASE CHOOSE FROM THE MENU--------\n\n ");
    printf("\n0. TO EXIT, Press '0'.\n1. Display linked list.\n2. Insertion of node at the begining.\n3. Insertion of node at the end.\n4. Insertion of node at random position.\n5. Insertion of more than one node at random position.");
    printf("\n6. Deletion of node from the begining.\n7. Deletion of node from the end.\n8. Deletion of node from both begining and end.\n9. Deletion of node from random position.\n10. Deletion of more than one node from random position.");
    printf("\n11. Reverse the linked list.\n12. Sorting of linked list.\n13. Searching the element in linked list.");
    
    while(1)
    {
        printf("\n\nEnter the number from the menu: ");
        scanf("%d",&a);
        switch(a)
        {
            case 0:
            {
                printf("\nThanks for giving your time...goodbye!");
                exit(1);
            }
            case 1:
            {
                display(root,n);
                break;
            }
            case 2:
            {
                insert_at_begin(root,n);
                break;
            }
            case 3:
            {
                insert_at_end(root,n);
                break;
            }
            case 4:
            {
                insert_at_random_position(root,n);
                break;
            }
        }
    }

    
}
void display(struct node *root,int n)
{
    struct node *temp=NULL;
    temp=root;
     printf("\n\noriginal linked list:\n");
    while(temp->link!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
}
void insert_at_begin(struct node *root ,int n)
{
     struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the new element that you want to insert at the beginning of node: ");
    scanf("%d",&temp->data);
    temp->link=root;
    root=temp;
    printf("After insertion at begining: \n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
}
void insert_at_end(struct node *root ,int n)
{
    struct node *temp,*p;
    p=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nEnter the element that you want to insert at the end of node: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    while(root->link!=NULL){
        root=root->link;
    }
    root->link=temp;
    printf("\n\nAfter insertion at end:\n\n");
    while(p->link!=NULL)
    {
        printf("%d  ",p->data);
        p=p->link;
    }
    printf("%d",p->data);
}
void insert_at_random_position(struct node *root,int m)
{
     int n,i;
    struct node *temp=NULL,*p=NULL,*print=NULL,*toreturn=NULL;
    p=root;
    print=root;
    toreturn=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n\nEnter the position at which you want to insert: ");
    scanf("%d",&n);
    printf("Enter the new element that you want to insert at %d position: ",n);
    scanf("%d",&temp->data);
    if((n>1) &&(n<m))
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
    else if(n==1)
    {
    temp->link=root;
    root=temp;
    printf("\n\nafter insertion:\n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
    }
    else if(n>m)
    {
         temp->link=NULL;
    while(root->link!=NULL){
        root=root->link;
    }
    root->link=temp;
    printf("\n\nafter insertion:\n\n");
    while(p->link!=NULL)
    {
        printf("%d  ",p->data);
        p=p->link;
    }
    printf("%d",p->data);
    }
    else if(n==m)
    {
       while(root->link!=NULL){
           root=root->link;
       }
       temp->link=root;
        
        for(i=1;i<=m;i++)
        {
            if(p->link==temp->link)
            {
                p->link=temp;
                break;

            }
            p=p->link;
        }
        while(print->link!=NULL)
        {
            printf("%d  ",print->data);
            print=print->link;
        }
        printf("%d",print->data);

    }
}