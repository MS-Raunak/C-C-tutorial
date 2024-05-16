#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    int *prev,*next;
};
struct node* start=NULL;
void insertsafirstnode()
{
 struct node*n;
 n=(struct node *)malloc(sizeof(struct node));
 printf("Enter a number:");
 scanf("%d",&n->info);
}


