#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
void switch_print(struct node *,int);
void display(struct node *,int);
struct node * insert_at_begin(struct node *,int);
struct node * insert_at_end(struct node *,int);
struct node * insert_at_random_position(struct node *,int);
struct node * insert_more_than_one(struct node *,int);
struct node * delete_at_begin(struct node *,int);
struct node * delete_at_end(struct node *,int);
struct node * delete_both_begin_end(struct node *,int);
struct node * delete_at_random(struct node *,int);
struct node * delete_more_than_one(struct node *,int);
struct node * reverse(struct node *,int);
struct node * sorting(struct node *,int);
struct node * searching(struct node *,int);
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
  switchprint(root,n);
}
void switchprint(struct node *root,int n)
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
                root=insert_at_begin(root,n);
                break;
            }
        }
    }

    
}