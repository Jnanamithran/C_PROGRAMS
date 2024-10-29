#include<stdio.h>
int main()
{
int a[10],e,i;
printf("Enter the highest exponent:");
scanf("%d",&e);
for(i=0;i<=e;i++)
     {
         printf("Enter the co efficient");
         scanf("%d",&a[i]);
 
     }
 for(i=e;i>=0;i--)
     {
        
        if(i==0)
           {
             printf("%dx^%d",a[i],i);
           }
         else
           {
                  printf("%dx^%d+",a[i],i);
           }    
    
     
     }
return 0;
}
