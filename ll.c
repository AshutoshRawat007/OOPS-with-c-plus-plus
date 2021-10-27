#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}nodee;
nodee* insertnode();
void display(struct node*head)
{
	 struct node *current = head;  
	 while(current != NULL) 
	 {  
         	 printf("%d ", current->data);  
        	  current = current->next;  
    	 }  
}

nodee* insertnode()
{
	int n;
	printf("enter element  ");
	scanf("%d",&n);
	struct node *newNode = (struct node*)malloc(sizeof(struct node));  
	newNode->data=n;
	newNode->next=NULL;
	return newNode;	
		
		
		
				
}

int main()
{
	struct node*head,*tail=NULL;
	int ch=0;
	
	while(ch!=-1)
	{	
		
		
		struct node *newNode=insertnode();
	
		if(head==NULL)
		{
			head=newNode;
			tail=newNode;
		}
		else
		{	
			tail->next=newNode;
			tail=newNode;				
																			
		}
		printf("enter -1 to exit 0 to enter element    ");
		scanf("%d",&ch);
	}

	display(head);

		int ins;
		
		printf("\n enter 1 to insert 2 to delete from linked list    ");
		scanf("%d",&ch);
		switch(ch){
		case 1:
			
			printf("enter 100 to insert at first 101 to insert at last 102 to insert in middle    ");
		        scanf("%d",&ins);
			switch(ins){	
			case 100:
				
				
				printf(" ");
				struct node *newNode=insertnode();
				
				newNode->next=head;
				head=newNode;
			 	break;
				}
			break;
			}
				
	display(head);
    	 					
			        						
					
					



		
			
}
