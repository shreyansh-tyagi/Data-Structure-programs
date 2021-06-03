#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data ;
    struct node *link;
};
struct node *top=NULL;
void push();
void pop();
void traverse();
void main()
{
    int ele,n;
    while(1)
    {
    printf("\n----choose from the menu---- \n");
    printf("\n1. push the element into stack\n2. pop the element from the stack\n3. traverse the stack\n4. exit from the program");
    printf("\n\n enter your choice: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:
        {
            traverse();
            break;
        }
        case 4:
        exit(1);
        default:
        printf("\nplease enter the valid value\n");

    }
    }

}
void push(){
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node ));
    printf("\nenter the element to push into stack: ");
    scanf("%d",&temp->data);
   temp->link=top;
   top=temp;
   printf("\nelement inserted into stack: %d\n\n",top->data);
   
}
void pop()
{
    struct node *temp=NULL;
    if(top==NULL)
    {
        printf("\nstack underflow\n\n");
    }
    else{
        temp=top;
        printf("\npopped element is: %d\n\n",temp->data);
        top=top->link;
        temp->link=NULL;
        free(temp);
    }
}
void traverse()
{
    struct node *temp=NULL;
    if(top==NULL)
    printf("\n\nstack is empty\n\n");
    else{
        temp=top;
        printf("\nstack is:\n");
        while(temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->link;
        }
    }
}