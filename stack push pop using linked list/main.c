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
void main()
{
    int ele,n;
    while(1)
    {
    printf("\n----choose from the menu---- \n");
    printf("\n1. push the element into stack\n2. pop the element from the stack\n3. exit from the program");
    printf("\nenter your choice: ");
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
        }
        case 3:
        exit(1);

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
}
void pop()
{

}