//this is a bubble sort program
#include<stdio.h>
int main()
{
int a[10],i,j,n,temp;
printf("enter the size of array \n");
scanf("%d",&n);
printf("enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is");
for(i=0;i<n;i++)
{
printf(" %d ",a[i]);
}
return 0;
}
