#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct whynode{  //global declaration of structure and its member can be accessed 
    int datapart;
    struct whynode *linkpart; 
};
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
    {
        /* code */
    }
    
    printf();
}