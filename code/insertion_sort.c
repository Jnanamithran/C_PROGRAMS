#include<stdio.h>
void insertionSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{	
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}	
		arr[j+1]=key;
	}
}

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%d\t",arr[i]);	
	printf("\n");
}

int main()
{
	int arr[10],i,n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	insertionSort(arr,n);
	display(arr,n);
	
	return 0;
}		
	
