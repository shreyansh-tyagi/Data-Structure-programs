#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *link;
};
struct node * display(struct node *,int);
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
    
}