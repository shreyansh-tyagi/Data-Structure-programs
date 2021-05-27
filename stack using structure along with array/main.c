#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct stacktype
{
    int arr[MAX];
    int top;
} STACK;
void main()
{
    STACK s;
    void push(STACK * , int);
    int pop(STACK *);
    int peep(STACK *);
    int isempty(STACK *);
    int isfull(STACK *);
    int ch,ele;
    s.top= -1;
    while(1)
    {
        printf("\t Select option among the following choices!!!!!!!");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peep");
        printf("\n 4. Exit");
        printf("\n\n Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : if(isfull(&s))
                        printf("Stack is full, you cannot push an element..");
                    else
                          push(&s,ele);
                    break;
            case 2 : if(isempty(&s))
                        printf("Stack is empty, you cannot pop an element..");
                    else
                          pop(&s);
                    break;
            case 3 : if(isempty(&s))
                        printf("Stack is empty");
                    else
                        peep(&s);
                    break;
            case 4 : exit(1);
            default : printf("wrong choice entered !!");
                     break;
        }
    } 
}
int isempty( STACK *s)
{
    if(s->top==-1)
    return 1;
    else
    return 0;
}
int isfull( STACK *s)
{
    if(s->top==MAX)
    return 1;
    else 
     return 0;
}
void push(STACK *s, int ele)
{
    scanf("%d",&ele);
    s->top=s->top+1;
    s->arr[s->top]=ele;
     printf("Pushed element is :- %d",ele);

}

int pop(STACK *s)
{
    int ele;
    ele=s->arr[s->top];
    s->top=s->top-1;
    printf("Poped element is :- %d",ele);
    return 0;
}
int peep(STACK *s)
{
    int ele;
    ele=s->arr[s->top];
    printf("Element at top of stack is :-%d",ele);
}