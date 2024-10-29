#include<stdio.h>
int main()
{
int a[10],b[10],e,i,e1;
printf("Enter The Exponent of first eq");
scanf("%d",&e);
printf("enter the exponent of second eq");
scanf("%d",e1);
  for(i=0;i<=e;i++)
    {
       printf("Enter the co efficient 1");
       scanf("%d",&a[i]);
      
    }
  for(i=e;i>=0;i--)
     {
         if(i==0)
           {
              printf("%dx",a[i],i);
           }
         else
         {
            printf("%dx^%d+",a[i]);
         }
                   
      }


     for(i=0;i<=e1;i++)
      {
         printf("Enter the co efficient 2");
         scanf("%d",&b[i]);
      }
 for(i=e,i>=0,i++)
         {
            if(i==0)
              { 
                 printf("%dx",b[i],i);
              }
             else
             {
                  printf("%dx^%d",b[i],i);
             } 
         
         }

return o:
}
