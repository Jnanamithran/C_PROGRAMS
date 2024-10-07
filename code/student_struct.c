#include<stdio.h>
struct stu
{
	int rno;
	char name[10];
	int total;
}a1,a2;

void main()
{
	struct stu a1,a2;
	printf("Enter details of First Student\n");
	printf("Enter Name\n");
	fgets(a1.name,sizeof(a1.name),stdin);
	printf("Enter roll number\n");
	scanf("%d",&a1.rno);
	printf("Enter total marks\n");
	scanf("%d",&a1.total);
	getchar();
	printf("Enter details of 2nd Student\n");
	printf("Enter Name\n");
	fgets(a2.name,sizeof(a2.name),stdin);
	printf("Enter roll number\n");
	scanf("%d",&a2.rno);
	printf("Enter total marks\n");
	scanf("%d",&a2.total);
	
	printf("First Student\n");
	//puts(a1.name);
	printf("%s\n",a1.name);
	printf("%d\n",a1.rno);
	printf("%d\n",a1.total);

	printf("Second Student\n");
	//puts(a2.name);
	printf("%s\n",a2.name);
	printf("%d\n",a2.rno);
	printf("%d\n",a2.total);
}
