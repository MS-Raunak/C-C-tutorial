#include<stdio.h>
#include<stdlib.h>

void deleteFrontNOdeFromCLL(struct CLLNode **head)
{
    int current;
    struct CLLNode*temp=*head;
    struct CLLNode*current=*head;
    if(*head==NULL)
    {
        printf("Empty List");
        return;
    }
    while(current->next!=*head)
    current=current->next;
    *head=*head->next;
    free(temp);
    return;
}