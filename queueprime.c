#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1;
int rear=-1;
int queue_arr[MAX];
void enqueue();
void dequeue();
void display();
void main()
{ 
	int choice;
	while(1)
	{
		printf("\n1.enqueue");
		printf("\n2.dequeue");
		printf("\n3.display");
		printf("\n4.quit");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: display();
			        break;
			case 4: exit(1);
			default:printf("invalid input");
		}
	}
}
void enqueue()
{
	int item;
	if(rear==MAX-1)
	{
		printf("overflow");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("enter new value");
		scanf("%d",&item);
		rear++;
		queue_arr[rear]=item;
	}
}
void dequeue()
{
	int item;
	if(front==-1||front==rear+1)
	{
		printf("underflow");
	}
	else 
	{ 
		item=queue_arr[front];
		printf("deleted element is %d",item);
		front++;
	}
}
void display()
{
	int i;
	if(front==-1||front==rear+1)
	{
		printf("\nempty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
		int count=0;
		for(int j=1;j<=queue_arr[i];j++)
		{
			if(queue_arr[i]%j==0)
			count++;
		}
		if(count==2)
			printf("%d\t",queue_arr[i]);
		}
	}
}

	
