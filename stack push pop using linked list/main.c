#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data ;
    struct node *link;
};
struct node *top=NULL;
void push(int);
void pop();
void main()
{
    int ele,n;
    printf("\n----choose from the choice from the menu---- \n");
    printf("\n1. push the element into stack\n2. pop the element from the stack");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            push(ele);
            break;
        }
        case 2:{
            pop();
        }

    }

}
void push(int a){
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node ));
    printf("\nenter the element to push into stack: ");
    scanf("%d",&temp->data);
   temp->link=top;
   top=temp;
}