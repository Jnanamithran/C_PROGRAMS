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
				tmp->link=NULL;
			else 
				tmp->link=start;
			start=tmp;
			break;
			
			case 2:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			tmp->link=NULL;
			if(start==NULL)
				start=tmp;
			else
				p=start;
			while(p->link!=NULL)
				p=p->link;
			p->link=tmp;
			break;
			case 3:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			printf("\nEnter the data after which item has to be added:");
			scanf("%d",&q);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			p=start;
			while(p->data!=q&&p!=NULL)
				p=p->link;
			if(p->data==q)
			{
				tmp->link=p->link;
				p->link=tmp;
			}
			else
			{
				printf("\nwsif\n");
				printf("\nElement not found");
			}
			break;
			case 4:if(start==NULL)
					printf("Underflow");
				else
				{
					tmp=start;
					printf("\n The deleted element is %d",tmp->data);
					start=tmp->link;
					free(tmp);
				}
			break;
			case 5: p=start;
			while(p->link->link!=NULL)
				p=p->link;
			tmp=p->link;
			printf("\nthe deleted element is %d",tmp->data);
			p->link=NULL;
			free(tmp);
			break;
			case 6:printf("\nenter the data after which item has to be deleted");
			scanf("%d",&q);
			p=start;
			while(p!=NULL)
			{
				if(p->data==q)
				{
					tmp=p->link;
					printf("\nThe deleted element is %d",tmp->data);
					p->link=tmp->link;
					free(tmp);
				}
				p=p->link;
			}
			break;
			case 7:printf("\nDisplay\n");
			if(start==NULL)
				printf("\n The list is empty\n");
			else 
			{
				p=start;
				while(p!=NULL)
				{
					printf("%d\t",p->data);
					p=p->link;
				}
			}
			break;
			case 8 : exit(1);
			default : printf("Wrong choice");
		}
	}
}
			
				
