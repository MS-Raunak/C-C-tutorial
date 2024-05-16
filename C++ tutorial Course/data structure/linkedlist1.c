/*linked list  1st class
========================                                                                    */
#include<stdio.h>
#include<malloc.h>
typedef struct Link
{  int data;
   struct Link *next;
}Node;

Node * createNode(Node *node,int data)
{ Node *tmp,*t;
	tmp=(Node*)malloc(sizeof(Node));
	tmp->data=data;
	tmp->next=NULL;
	if(node==NULL) //first node
	{node=tmp;
	}
	else
	{ t=node;
	   while(t->next!=NULL)
	   {t=t->next;
	   }
	   t->next=tmp;
		
	}
	
	
	return node;
}


void display(Node *node)
{ Node *tmp;
   if(node==NULL)
   {
   	printf("List is empty...");
      }
   else
   { tmp=node;
     while(tmp)
     {
     	printf("%d,",tmp->data);
     	tmp=tmp->next;
	 }
   }
void main()
{ Node  *node=NULL;
 node=createNode(node,50);
 node=createNode(node,60);
 node=createNode(node,70);
 node=createNode(node,80);
 display(node);
 node=createNode(node,125);
 printf("\n");
 display(node);
}
  
  

 
