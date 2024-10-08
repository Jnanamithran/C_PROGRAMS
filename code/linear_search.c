#include<stdio.h>
void main()
{
int i,a[50],n,m;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter Your array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Your array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("Enter the element you need to search: ");
scanf("%d",&m);
for(i=0;i<n;i++)
{
if(a[i]==m)
{
printf("Element Found at postion %d!!!",i+1);
}
}
}
