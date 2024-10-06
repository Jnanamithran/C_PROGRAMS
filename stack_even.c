#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top= -1;
void push();
void pop();
void display();
void main()
{
	int choice;
	while(1)
	{
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n3.display");
		printf("\n4. quit");
		printf("\n Enter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(1);
			deafault: printf("invalid input");
		}
	}
}
void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("overflow");
	}
	else
	{
		printf("enter the value of the new item");
		scanf("%d",&item);
		top++;
		stack_arr[top]=item;
	}
}
void pop()
{
	int item;
	if(top== -1)
	{
		printf("underflow");
	}
	else
	{
		item=stack_arr[top];
		top--;
		printf("the deleted item is %d",item);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			if (stack_arr[i]%2==0)
			printf("\t %d",stack_arr[i]);
		}
	}
}
	
			
