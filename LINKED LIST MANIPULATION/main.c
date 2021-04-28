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
void insert_at_end(struct node *,int);
int insert_at_random_position(struct node *,int);
int insert_more_than_one(struct node *,int);
void delete_at_begin(struct node *,int);
void delete_at_end(struct node *,int);
void delete_both_begin_end(struct node *,int);
int delete_at_random(struct node *,int);
int delete_more_than_one(struct node *,int);
void reverse(struct node *,int);
void sorting(struct node *,int);
void searching(struct node *,int);
void length(int);
void largest_element(struct node *,int);
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
    printf("\n11. Reverse the linked list.\n12. Sorting of linked list.\n13. Searching the element in linked list.\n14. Length of linked list.\n15. Largest element from the linked list.");
    
    while(1)
    {
        printf("\n\nEnter the number from the menu to perform the task: ");
        scanf("%d",&a);
        switch(a)
        {
            case 0:
            {
                printf("\nThanks for giving your time...goodbye!\n\n");
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
               n++;
                break;
            }
            case 3:
            {
                insert_at_end(root,n);
                n++;
                break;
            }
            case 4:
            {
                n=insert_at_random_position(root,n);
                break;
            }
            case 5:
            {
                n=insert_more_than_one(root,n);
                break;
            }
            case 6:
            {
                delete_at_begin(root,n);
                break;
            }
            case 7:
            {
                delete_at_end(root,n);
                break;
            }
            case 8:
            {
                delete_both_begin_end(root,n);
                break;
            }
            case 9:
            {
                n=delete_at_random(root,n);
                break;
            }
            case 10:
            {
                n=delete_more_than_one(root,n);
                break;
            }
            case 11:
            {
                reverse(root,n);
                break;
            }
            case 12:
            {
                sorting(root,n);
                break;
            }
            case 13:
            {
                searching(root,n);
                break;
            }
            case 14:
            {
                length(n);
                break;
            }
            case 15:
            {
                largest_element(root,n);
                break;
            }
            default:
            {
                printf("\n\n-----Please, SELECT the number from the MENU-------\n\n");
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
struct node * insert_at_begin(struct node *root ,int n)
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
    return temp;
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
int insert_at_random_position(struct node *root,int m)
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
    printf("\n\nAfter Insertion:\n\n");
    while(print->link!=NULL)
    {
        printf("%d  ",print->data);
        print=print->link;
    }
    printf("%d",print->data);
    return (m+1);
    }
    else if(n==1)
    {
    temp->link=root;
    root=temp;
    printf("\n\nAfter Insertion:\n\n");
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
    printf("\n\nAfter Insertion:\n\n");
    while(p->link!=NULL)
    {
        printf("%d  ",p->data);
        p=p->link;
    }
    printf("%d",p->data);
    return (m+1);
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
        return (m+1);
    }
}
int insert_more_than_one(struct node *root,int n)
{
     struct node *temp=NULL,*p=NULL,*ptr=NULL,*linknode=NULL,*temp1=NULL,*root1=NULL,*pt=NULL;
    root1=root;
    int m,i,pos;
    printf("\n\nEnter the size of new node: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data into %d node of new linked list: ",i);
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(p==NULL)
    {
        p=temp;
        linknode=temp;
        pt=temp;
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
    printf("\n\nSecond node: \n\n");
     while(linknode->link!=NULL)
    {
        printf("%d  ",linknode->data);
        linknode=linknode->link;
    }
    printf("%d",linknode->data); 
    printf("\nEnter the position from where you want to insert the new node to existing node: ");
    scanf("%d",&pos);
    if((pos>1)&&(pos<=n))
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
    printf("\n\nAfter insertion:\n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
    return (n+m);
    }
    else if(pos==1)
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=root1;
        while(pt->link!=NULL)
        {
            printf("%d  ",pt->data);
            pt=pt->link;
        }
        printf("%d",pt->data);
        
    }
    else if(pos>n)
    {
        while(root1->link!=NULL)
        {
            root1=root1->link;
        }
        root1->link=p;
        while(root->link!=NULL)
        {
            printf("%d  ",root->data);
            root=root->link;
        }
        printf("%d",root->data);
        return(n+m);
    }
}
void delete_at_begin(struct node *root,int n)
{
     struct node *temp=NULL;
  printf("\n\nAfter deletion from first position:\n\n");
  temp=root;
  root=temp->link;
   while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
    printf("%d",root->data);
}
void delete_at_end(struct node *root,int n)
{
    printf("\n\nAfter deletion from last position\n\n");
    while(root->link!=NULL)
    {
        printf("%d  ",root->data);
        root=root->link;
    }
}
void delete_both_begin_end(struct node *root,int n)
{
    struct node * temp=NULL;
    printf("\n\nAfter deletion from first and last position\n\n");
    temp=root->link;
    while(temp->link!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
}
int delete_at_random(struct node *root,int n)
{
    int pos,i,m,loc;
    struct node *temp=NULL,*p=NULL,*q=NULL;
    temp=root;
    p=root;
    q=root;
    printf("\n\nEnter the position from where you want to delete the node: ");
    scanf("%d",&pos);
    if(pos>1){
    m=pos;
    loc=pos-1;
    for(i=1;i<loc;i++)
    {
        p=p->link;
    }
    for(i=1;i<=m;i++)
    {
        q=q->link;
    }
    p->link=q;
    printf("\n\nAfter deletion from %d position:\n\n",pos);
    while(temp->link!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
    return(n-1);
    }
    else if(pos==1)
    {
        temp=temp->link;
        printf("\n\nAfter deletion from %d position:\n\n",pos);
        while(temp->link!=NULL)
        {
           printf("%d  ",temp->data);
           temp=temp->link;
        }
        printf("%d",temp->data);

    }
}
int delete_more_than_one(struct node *root,int n)
{
    int pos,val,i,loc;
    struct node *temp=NULL,*p=NULL,*q=NULL;
    temp=root;
    q=root;
    printf("\n\nEnter the position from where you want to delete the node: ");
    scanf("%d",&pos);
    printf("\n\nEnter the number of node you want to delete: ");
    scanf("%d",&val);
    if(pos>1)
    {   
    loc=pos-1;
    for(i=1;i<loc;i++)
    {
        temp=temp->link;

    }
    p=temp;
    for(i=1;i<=val;i++)
    {
        p=p->link;
    }
    temp->link=p->link;
    while(q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->data);
    return(n-val);
    }
    if(pos==1)
    {
        for(i=1;i<=val;i++)
        {
            temp=temp->link;
        }
        q=temp;
        while(q->link!=NULL)
        {
            printf("%d  ",q->data);
            q=q->link;
        }
        printf("%d",q->data);
    }    
}

void reverse(struct node *root,int n)
{
     struct node *temp=NULL,*p=NULL,*q=NULL;
    int i,j,temp1,temp2,m;
    printf("\nAfter reversing the linked list is:\n\n");
    m=n;
    q=root;
    for(i=1;i<=n;i++)
    {
        temp=root;
         p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=p->link;
            temp2=p->data;
            temp->data=temp2;
            p->data=temp1;
            temp=temp->link;

        }
        m--;
    }
    while (q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->data);
}
void sorting(struct node *root,int n)
{
     struct node *temp=NULL,*p=NULL,*q=NULL;
    int i,j,temp1,temp2,m,a;
    printf("\n\nChoose from the menu:\n1. Ascending order sort, press '1'\n2. Descending order sort, press '2'\n3. To exit, press '0': ");
    scanf("%d",&a);
    q=root;
    m=n;
    switch(a)
    {
        case 1:
        {
        printf("\n\nAfter sorting in Ascending order:\n\n");
        for(i=1;i<=n;i++)
        {
        temp=root;
        p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=temp->link;
            temp2=p->data; 
            if(temp1>temp2)
            {
                temp->data=temp2;
                p->data=temp1;
            }
            temp=temp->link;
        }
    }
    while(q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->data);
    break;

        }

    case 2:
    {
        printf("\n\nAfter sorting in Descending order:\n\n");
    for(i=1;i<=n;i++)
    {
        temp=root;
        p=root;
        for(j=1;j<m;j++)
        {
            temp1=temp->data;
            p=temp->link;
            temp2=p->data; 
            if(temp1<temp2)
            {
                temp->data=temp2;
                p->data=temp1;
            }
            temp=temp->link;
        }
    }
    while(q->link!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("%d",q->data);
    break;
    }  
    case 0:
    {
        printf("\n\nThanks for giving your time ...goodbye!\n\n");
        exit(1);
    }
    default:
    {
        printf("\n\nPlease enter the valid number from the menu...\n\n");
    }

    }
    
}

void searching(struct node *root,int n)
{
 
     while(1) 
    {
        char ch;
    int b,c;
    printf("\n\nFOR CONTINUE, Searching press any number\nTO EXIT, Press '0': ");
    scanf("%d",&b);  
    switch(b)
    {
        case 0:
        {
        printf("\n\nThanks for giving your time ...goodbye!\n\n");
        exit(1);
        }
    } 
    struct node *temp=NULL;
    temp=root;
    int a,i,count=0;
    printf("\n\nEnter the number that you want to search: ");
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(a==temp->data)
        {
            printf("\n%d is present at %d position",a,i);
            count++;
        }
        temp=temp->link;
    }
    if(count==0)
    {
    printf("\n\n%d is not present in linked list",a);
    printf("\n\nDo you want to insert '%d' into linked list?\nType 'y' or 'n': ",a);
    scanf("%s",&ch);
    switch (ch)
    {
        case 'y':
        {
        printf("\n\nChoose from the menu:\n1. Insert at begining.\n2. Insert at end or random position: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                root=insert_at_begin(root,n);
                n++;
                break;
            }
            case 2:
            {
                n=insert_at_random_position(root,n);
                break;
            }
            default:
            {
                printf("\n----Please SELECT from the menu----\n");
                break;
            }
        }
        break;
        }
        case 'n':
        {
        printf("\nOKAY!!");
        break;
        }
        default:
        {
        printf("\nPlease entre the valid character 'y' or 'n'");
        break;
        }
    }
    }
}
}
void length(int n)
{
    printf("Length of linked list: %d",n);
}
void largest_element(struct node * root ,int n)
{
    struct node *temp=NULL,*p=NULL;
    int large=0;
    temp=root;
    large=temp->data;
    while(temp->link!=NULL)
    {
        p=temp->link;
        if(large<p->data)
        {
            large=p->data;

        }
        temp=temp->link;
    }
    printf("\n\nLargest element from the linked list: %d",large);
}