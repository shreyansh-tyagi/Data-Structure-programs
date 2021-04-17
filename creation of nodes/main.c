#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct whynode{  //global declaration of structure and its member can be accessed 
    int datapart;
    struct whynode *linkpart; 
};
void linkfunction(struct whynode*);
void main()
{
    struct whynode *head,*second,*third,*fourth;
    head=(struct whynode*)malloc(sizeof(struct whynode));
    second=(struct whynode*)malloc(sizeof(struct whynode));
    third=(struct whynode*)malloc(sizeof(struct whynode));
    fourth=(struct whynode*)malloc(sizeof(struct whynode));
    head->datapart=10;
    head->linkpart=second;
    second->datapart=20;
    second->linkpart=third;
    third->linkpart=fourth;
    third->datapart=30;
    fourth->datapart=40;
    fourth->linkpart=NULL;
    linkfunction(head);
}
void linkfunction(struct whynode *ptr)
{
    while(ptr!=NULL)
    {
        printf("element: %d\n",ptr->datapart);
        ptr=ptr->linkpart;

    }
}