#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
void display();
int pop();
int isfull();
void main()
{
    int ch,ele;
    while(1)
    {
        printf("\n--------CHOOSE FROM THE MENU-----------\n");
    printf("\n\n1. push\n");
    printf("2. pop\n");
    printf("3. display\n");
    printf("4. traverse\n");
    printf("5. exit\n");
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
               printf("popped item is: %d",ele);
           }
        }
        case 3:
        { 
        display();
        break;
        }
        case 4: traverse();
        case 5:{
            printf("\nThanks for giving your time...goodbye!\n\n");
            exit(1);
        }
         
        default: printf("\nInvalid input\n\n");

    }
    }
}
int isfull()
{   
    if(top==CAPACITY-1)
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
        top++;
        stack[top]=ele;
          printf("\n\ninserted: stack[%d]= %d\n\n",top,ele);
    }
}
void display()
{
    printf("\n\nstack is :\n\n");
    for(int i=0;i<CAPACITY;i++)
    {
        printf("%d  ",stack[i]);
    }
}
int pop()
{
    if(isempty())
    {
        return 0;
    }
    else{
         return stack[top--];
    }
}