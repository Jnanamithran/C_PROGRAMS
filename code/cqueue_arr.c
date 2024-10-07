#include<stdio.h>
#include <stdlib.h>
#define MAX 5
int cqueue_arr[MAX];
int front=-1;
int rear=-1;
void insert();
void delete();
void display();

void main()
{
int choice;
while(1)
{
printf("\n1. Insert");
printf("\n2. Delete");
printf("\n3. Display");
printf("\n4. Quit");
printf("\nEnter your choice");
scanf("\n%d",&choice);
switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:exit(1);
default:printf("\nInvalid Output");
}
}
}

void insert()
{
int item;
if(front==0&&rear==MAX-1||front==rear+1)
{
printf("\nOverflow");
}
else 
{
printf("\nEnter the element to be inserted");
scanf("\n%d",&item);
if(front==-1)
{
front=0;
}
if(rear==MAX-1)
{
rear=0;
}
else
{
rear++;
}
cqueue_arr[rear]=item;
}
}

void delete()
{
int item;
if(front==-1)
{
printf("\nUnderflow");
}
else
{
item=cqueue_arr[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==MAX-1)
{
front=0;
}
else
{
front++;
}
printf("\nDeleted element is %d",item);
}
}

void display()
{
int i;
if(front==-1)
{
printf("\nEmpty");
}
else
{
if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("\n%d",cqueue_arr[i]);
}
}
else
{
for(i=front;i<=MAX-1;i++)
{
printf("\n%d",cqueue_arr[i]);
}
for(i=0;i<=rear;i++)
{
printf("\n%d",cqueue_arr[i]);
}
}
}
}

