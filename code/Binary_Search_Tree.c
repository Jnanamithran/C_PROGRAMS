#include<stdio.h>
#include<stdlib.h>
int i=0;
struct node
{
	int item;
	struct node *left;
	struct node *right;
};

struct node *create()
{
	int x;
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter Value(-1 for NULL)");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	p->item=x;
	printf("\n Enter the left child %d",x);
	p->left=create();
	printf("\n Enter the right child %d",x);
	p->right=create();
	return p;
}

void inorderTraversal(struct node *root)
{
	if(root==NULL)
		return;
	inorderTraversal(root->left);
	printf("%d\t",root->item);
	inorderTraversal(root->right);
}

void preorderTraversal(struct node *root)
{
	if(root==NULL)
		return;
	printf("%d\t",root->item);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

void postorderTraversal(struct node *root)
{
	if(root==NULL)
		return;
	preorderTraversal(root->left);
	preorderTraversal(root->right);
	printf("%d\t",root->item);
}

void binarySearch(struct node *root,int key)
{
	if(root==NULL)
		return;
	i=i+1;
	if(root->item==key)
		printf("\nElement Found at root at level %d",i-1);
	else if(root->item>key)
			binarySearch(root->left,key);
	else if(root->item<key)
			binarySearch(root->right,key);
}

void main()
{
	struct node *root;
	int key;
	root=create();
	printf("\nTraversal");
	printf("\nInorder Traversal");
	inorderTraversal(root);
	printf("\nEnter the element to be searched");
	scanf("\n%d",&key);
	binarySearch(root,key);
	printf("\nPreorder Traveersal");
	preorderTraversal(root);	
	printf("\nPostorder Traversal");
	postorderTraversal(root);
}


