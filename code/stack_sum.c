#include<stdlib.h>
#include<stdio.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
void push();
void pop();
void display();

void main()
{
int choice;
while(1)
{
printf("\nMenu");
printf("\n1. Push");
printf("\n2. Pop");
printf("\n3. Display");
printf("\n4. Quit");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1 :push();
break;
case 2 :pop();
break;
case 3 :display();
break;
case 4 :exit(0);
default: printf("\nInvalid Output");
}
}
}

void push()
{
int item;
if(top==MAX-1)
{
printf("Overflow");
}
else
{
printf("Enter the element to be inserted");
scanf("%d",&item);
top++;
stack_arr[top]=item;
}
}

void pop()
{
int item;
if(top==-1)
{
printf("Underflow");
}
else
{
item=stack_arr[top];
top--;
printf("element deleted is %d",item);
}
}

void display()
{
int i,sum=0;
if(top==-1)
{
printf("Empty");
}
else
{
for(i=top;i>=0;i--)
{
sum=stack_arr[i]+sum;
printf("\n%d",stack_arr[i]);
}
printf("\n%d",sum);
}
}
