#include <stdio.h>
void main()
{
    int i,n,start,end,mid,key;
    int arr[50];
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element");
    scanf("%d",&key);
    start=0;
    end=n;
    while(start<=end)
    {
     mid=(start+end)/2;
     if(arr[mid]==key)
     {
        printf("Element at %d position",mid+1);
        break;
     }
     else if(arr[mid]>key)
        end=mid--;
     else if(arr[mid]<key)
        start=mid++;
    }
}

