#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*start=NULL;
void main()
{
	int item,ch1,q;
	struct node*p,*tmp;
	while(1)
	{
		printf("\nMENU");
		printf("\n1.Insertion at beg");
		printf("\n2.Insertion at end");
		printf("\n3.Insertion in btw");
		printf("\n4.Deletion at beg");
		printf("\n5.Deletion at end");
		printf("\n6.Deletion in btw");
		printf("\n7.Display");
		printf("\n8.Exit");
		printf("\n Enter your Choice");
		scanf("%d",&ch1);
		switch(ch1)
		{	
			case 1:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			if(start==NULL)
			{
				start=tmp;
				tmp->link=start;
			}
			else
			{
				tmp->link=start;
				p=start;
				while(p->link!=start)
					p=p->link;
				p->link=tmp;
				start=tmp;
			}
			break;
			
			case 2:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			if(start==NULL)
			{
				start=tmp;
				tmp->link=start;
			}
			else
			{
				p=start;
				while(p->link!=start)
					p=p->link; 
				p->link=tmp;
				tmp->link=start;
			}
			break;
			case 3:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			printf("\nEnter the data after which item has to be added:");
			scanf("%d",&q);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			p=start;
			do
			{
				if(p->data==q)
				{
					tmp->link=p->link;
					p->link=tmp;
				}
			p=p->link;
			}while(p!=start);
			break;
			case 4:if(start==NULL)
					printf("Underflow");
				else if(start->link==start)
				{
					printf("\n The deleted element is %d",start->data);
					free(start);
					start=NULL;
				}
				else
				{
					tmp=start;
					p=start;
					while(p->link!=start)
						p=p->link;
					p->link=start->link;
					start=start->link;
					printf("\n The deleted element is %d",tmp->data);
					free(tmp);
				}
			break;
			case 5:
			
			if(start==NULL)
				printf("Underflow");
			else if(start->link==start)
			{
				printf("\n The deleted element is %d",start->data);
				free(start);
				start=NULL;
			}
			else
			{
			
			 	p=start;
				while(p->link->link!=start)
					p=p->link;
				tmp=p->link;
				p->link=start;
				printf("\nthe deleted element is %d",tmp->data);
				free(tmp);
			}
			break;
			case 6:printf("\nenter the data after which item has to be deleted");
			scanf("%d",&q);
			p=start;
			while(p->link!=start&&p->data!=q)
				p=p->link;
			if(p->link!=start)
			{
				tmp=p->link;
				p->link=tmp->link;
				printf("Deleted element is %d",tmp->data);
				free(tmp);
			}
			else
			{
				printf("\n Element Not Found");
			}
			break;
			case 7:printf("\nDisplay\n");
			if(start==NULL)
				printf("\n The list is empty\n");
			else 
			{
				p=start;
				do
				{
					printf("%d\t",p->data);
					p=p->link;
				}while(p!=start);
			}
			break;
			case 8 : exit(1);
			default : printf("Wrong choice");
		}
	}
}
			
				
