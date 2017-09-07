#include<stdio.h>
#include<stdlib.h>
typedef struct dlinkedlist
{
	int data;
	struct dlinkedlist *next;
	struct dlinkedlist *prev;
}node;
void print(node *q)
{
	node *ptr;
	ptr=q;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}  
}                                                
	void insbeg(node **q,int no)
	{
		node *temp,*ptr;
		temp=*q;
		ptr=(node*)malloc(sizeof(node));
		ptr->data=no;
		if(temp==NULL);
		ptr->next=NULL;
	else
			{
				ptr->next=temp;
				temp->prev=ptr;
			}
		*q=ptr;
		printf("\nELEMENTS OF LINK LIST AFTER INSERTION\n");
		print(*q);
	}
	
	void insend(node **q,int no)
	{
		node *ptr,*temp;
		ptr=(node*)malloc(sizeof(node));
		ptr->data=no;
		ptr->next=NULL;
		temp=*q;
		if(temp==NULL)
		*q=ptr;
		ptr->prev=NULL;
	}
		else
		{
			while(temp->next!=NULL)
			temp=temp->next;
			temp->next=ptr;
			ptr->prev=temp;
		}
		printf("\nELEMENT OF LINKLIST AFTER INSERTION\n");
		print(*q);
		
	}
	void insafter(node *q,int no)
	{
		int loc,k;
		node *temp,*ptr,*old;
		temp=q;
		ptr=(node*)malloc(sizeof(node));
		ptr->data=no;
		printf("ENTER LOCATION WHERE THE NO. IS TO BE INSERTED");
		scanf("%d"&loc);
		for(k=1;k<loc;k++)
		{
			if(temp==NULL)
			printf("\nELEMENETS ARE LESS THAN PROVIED LOCATION\n");
			else
			{
				old=temp;
				temp=temp->data;
			}
		}
		temp->prev->next=ptr;
		ptr->prev=temp->prev;
		ptr->next=temp;
		old->next=ptr;
		printf("\nELEMENTS OF LINK LIST AFTER INSERTION\n");
		print(q);
	}
	void del(node **q,int no)
	{
	int f=0;
	node *old,*temp;
	temp=*q;
	while(temp!=NULL)
	{
		if(temp->data==no)
		{
			f=1;
			if(temp==*q);
			{
			*q=temp->next;
			*q->prev=NULL;
		}
			else
			{
				temp->prev->next=temp->next;
				temp->next->prev=temp->prev;
				
			break;
		}
		else
		{
			old=temp;
			temp=temp->next;
		}
	}
	if(f==0)
	printf("\nTHE GIVEN NUMBER IS NOT FOUND\n");
	printf("\nELEMENTS OF LINK LIST AFTER DELETION\n");
	print(*q);
	void traverse(node *q)
	{
		printf("\nTRAVERSING LINK LIST\n\n");
		print(q);
		printf("\n\nEND OF LINKLIST\n");
	}
	int main()
	{
		node *start,*ptr,*temp;
		int i,n,j,no,c;
		printf("\nENETER NO OF NODES\n");
		scanf("%d",&n);
		printf("\nENETER NODE NUMBER 1");
		start=(node*)malloc(sizeof(node));
		scanf("%d",&start->data);
		temp=start;
		for(i=1;i<n;i++)
		{
			ptr=(node*)malloc(sizeof(node));
			
			printf("\nENTER NODE NUMBER",i+1);
			scanf("%d",&ptr->data);
			temp->next=ptr;
			ptr->prev=temp;
			temp=ptr;	
		}
		temp->next=NULL;
		do{
			printf("\nENTER YOUR CHOICH\n");
			printf("\n1-INSERTION\n2-DELETION\n3-TRAVERSE\n4-EXIT\n\n");
			scanf("%d",&no);
			printf("\nENTER 1 TO INSERT AT THE BEGINING\n");
			printf("\nENETER 2 TO INSERT AT THE END\n");
			printf("\nENTER TO INSERT AT A SPECIFIED LOCATION\n");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
				insbeg(&start,no);
				break;
				case 2:
				insend(&start,no);
				break;
				case 3:
				insafter(&after,no);
				break;
				default:
				printf("\nINVALID CHOICE");
				break;
			}
			break;
			case 2:
			printf("\nENETER THE NO TO BE DELETED");
			scanf("%d",&no);
			del(&start,no);
			break;
			case 3:
			traverse(start);
			break;
			case 4:
			exit(0);
			default
			printf("\nINVALID INPUT");
			break;
		}
	}while(1)
	return 0;
}


