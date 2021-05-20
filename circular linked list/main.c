#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node * link;
};
void display(struct node *);
void main()
{
    struct node *temp=NULL,*root=NULL,*p=NULL;
    int n;
    printf("\n\nenter the size of linked list: ");
    scanf("%d",&n);
    
}