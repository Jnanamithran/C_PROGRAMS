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
		printf("\n1.Insertion");
		printf("\n2.Deletion");
		printf("\n3.Display");
		printf("\n4.Exit");
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
			case 2:if(start==NULL)
			{	
					printf("Underflow");
			}
				else
				{
					tmp=start;
					printf("\n The deleted element is %d",tmp->data);
					start=tmp->link;
					free(tmp);
				}
			break;
			case 3:printf("\nDisplay\n");
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
			case 4 : exit(1);
			default : printf("Wrong choice");
		}
	}
}
			
				
