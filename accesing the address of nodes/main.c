#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node *next;
};
void main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    printf("%d\n",head);
    printf("%d\n",second);
    printf("%d\n",third);
    printf("%p\n",&head);
    printf("%p\n",&second);
    printf("%p",&third);
}