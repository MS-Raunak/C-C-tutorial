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
}

Node *insertAtFirst(Node *node,int data)
 { Node *temp;  
   temp=(Node*)malloc(sizeof(Node));
   temp->data=data	;
   temp->next=node;
   node=temp;
   return(node);
 }

void insertAfterData(Node *node,int data,int info)
{  Node*temp,*t;
   if(node==NULL)
   { printf("List is Empty..");
   }
   else
   { temp=(Node*)malloc(sizeof(Node));
     temp->data=data;
     t=node;
     while(t)
     { if(t->data==info)
        break;
        t=t->next;
	 }
	 if(t==NULL)
	 {printf("Info Not Found");
	 }
	 else
	 {temp->next=t->next;
	  t->next=temp;
	 }
   }
	
 } 

void main()
{ Node  *node=NULL;
int ch,value,info;
  do{
  	 printf("\n\nMain Menu\n1]Create New Node\n2]Display All\n3]Insert At First\n4]Insert After\n5]Exit\n");
  	 printf("Ur Choice:");
  	 scanf("%d",&ch);
  	 switch(ch)
  	 {case 1:
  	 	printf("Enter Value:");
		scanf("%d",&value);    
  	 	node=createNode(node,value);
  	 	break;
  	  case 2:
		 display(node);
		 break;
	  case 3:
	  	printf("Enter Value:");
		scanf("%d",&value);    
  	 	
	  	node=insertAtFirst(node,value);
	    break;
	  case 4:
	    printf("Enter Info U Want to Serach:");
		scanf("%d",&info);    
  	 	
		printf("Enter Value U want to Insert:");
		scanf("%d",&value);    
	    insertAfterData(node,value,info);	
  	 	break;
  	  case 5:
		  break;	
	  default:
	    printf("Wrong Option....");	 	  	 	
	   }
}while(ch!=5); 
  	
  }
