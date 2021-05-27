#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CAPACITY 5
struct stack{
    int top=-1;
    int data[CAPACITY];
}*s;
void push(int);
int pop();
void peek();
int isfull();
int isempty();
void main()
{
    int ch,ele;
    while(1)
    {
        printf("\n--------CHOOSE FROM THE MENU-----------\n");
    printf("\n\n1. push\n");
    printf("2. pop\n");
    printf("3. peek\n");
    printf("4. exit\n");
    printf("\nEnter your choice from the menu:\n\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("\nenter the element: ");
            scanf("%d",&ele);
         push(ele);
         break;
        }
        case 2:
        {
           ele= pop();
           if(ele==0)
           {
               printf("\nstack is underflow\n");
           }
           else{
               printf("\npopped item is: %d\n",ele);
           }
           break;
        }
        case 3:
        {
            peek();
            break;
        }
        
        case 4:{
            printf("\nThanks for giving your time...goodbye!\n\n");
            exit(1);
        }
         
        default: printf("\nInvalid input\n\n");

    }
    }
}
int isfull()
{   
    if(s->top==CAPACITY-1)
    return 1;
    else
    return 0;
}
void push(int ele)
{
    if(isfull())
    {
        printf("\nstack is overflow\n");
        
    }
    else{
        s->top++;
        s->data[s->top]=ele;
          printf("\n\ninserted: stack[%d]= %d\n\n",s->top,ele);
    }
}

int pop()
{
    if(isempty())
    {
        return 0;
    }
    else{
         return s->data[s->top--];
    }
}
int isempty()
{
    if(s->top==-1)
    return 1;
    else
    return 0;
}
void peek()
{
    if(isempty())
    {
        printf("\nstack is empty\n");
    }
    else{
        printf("\npeek eleement: %d\n",s->data[s->top]);
    }
}