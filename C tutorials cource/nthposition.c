#include<stdio.h>
#include<stdlib.h>
void insertnthposition(int);
void create(int);
struct node
{
    int info;
    struct node *next,*prev;
};
struct node *start;
void main()
{
    int choice,item,loc;
    do
    {
      printf("Enter the item that which you want to insert?\n");
      scanf("%d",&item);
      if(start==NULL)
      {
        create(item);
      }
      else
      {
        insertnthposition(item);
      }
      printf("\nPress 0 to insert more?\n");
      scanf("%d",&choice);
    } while (choice==0);
    
}
void create(int item)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        if(start==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->info=item;
            start=ptr;
        }
        else
        {
            ptr->info=item;
            printf("\nPress 0 to insert more?\n");
            ptr->prev=NULL;
            ptr->next=start;
            start->prev=ptr;
            start=ptr;
        }
        printf("\nNode Inserted");
        
    }
    
}
void insertnthposition(int item)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int i,loc;
    if(ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the location");
        scanf("%d",&loc);
        temp=start;
        for(i=0; i<loc; i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("\nCan't Insert\n");
                return;
            }
        }
        ptr->info=item;
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next->prev=ptr;
        printf("Node Inserted\n");
    }
    
}
