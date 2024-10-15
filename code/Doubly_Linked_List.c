#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *llink;
	struct node *rlink;
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
			tmp->llink=NULL;
			if(start==NULL)
				tmp->rlink=NULL;
			else 
				tmp->rlink=start;
			start=tmp;
			break;
			
			case 2:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			tmp->rlink=NULL;
			if(start==NULL)
				start=tmp;
			else
				p=start;
			while(p->rlink!=NULL)
				p=p->rlink;
			p->rlink=tmp;
			tmp->llink=p;
			break;
			case 3:printf("\nEnter the element to be inserted:");
			scanf("%d",&item);
			printf("\nEnter the data after which item has to be added:");
			scanf("%d",&q);
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->data=item;
			p=start;
			while(p!=NULL)
			{
				if(p->data==q)
				{
					tmp->rlink=p->rlink;
					tmp->llink=p;
					p->rlink->llink=tmp;
					p->rlink=tmp;
				}
			p=p->rlink;
			}
			break;
			case 4:if(start==NULL)
					printf("Underflow");
				else
				{
					tmp=start;
					tmp->rlink->llink=NULL;
					printf("\n The deleted element is %d",tmp->data);
					if(start!=NULL)
						start->llink=NULL;
					start=tmp->rlink;
					free(tmp);
				}
			break;
			case 5:if(start==NULL)
			printf("Underflow");
			 else
			 {
			 p=start;
			while(p->rlink!=NULL)
				p=p->rlink;
			printf("\nthe deleted element is %d",p->data);
			if(p->llink!=NULL)
				p->llink->rlink=NULL;
			else 
				start=NULL;

			free(p);
			}
			break;
			case 6:printf("\nenter the data after which item has to be deleted");
			scanf("%d",&q);
			p=start;
			while(p!=NULL)
			{
				if(p->data==q&&p->rlink!=NULL)
				{
					tmp=p->rlink;
					printf("\nThe deleted element is %d",tmp->data);
					p->rlink=tmp->rlink;
					if(tmp->rlink!=NULL)
						tmp->rlink->llink=p;
					free(tmp);
				}
				p=p->rlink;
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
					p=p->rlink;
				}
			}
			break;
			case 8 : exit(1);
			default : printf("Wrong choice");
		}
	}
}
			
				
