#include<stdio.h>
void main()
{
int a[5][5],r,c,nz=0,sm[5][5],i,j,sr,sv,s;
printf("Enter the rows\n");
scanf("%d",&r);
printf("Enter the Column\n");
scanf("%d",&c);
printf("Enter the element\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Your matrix is....\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",a[i][j]);
if(a[i][j]!=0)
{
nz++;
}
}
printf("\n");
}

//triple
sr=nz+1;
sm[0][0]=r;
sm[0][1]=c;
sm[0][2]=nz;
s=1;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
sm[s][0]=i+1;
sm[s][1]=j+1;
sm[s][2]=a[i][j];
s++;
}
}
}

//display
printf("Triple form\n");
for(i=0;i<sr;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",sm[i][j]);
}
printf("\n");
}
}

