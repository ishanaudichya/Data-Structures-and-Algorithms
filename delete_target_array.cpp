#include<stdio.h>
#include<stdlib.h>
int main()
{
int MAX,n,x,pos=-1;
scanf("%d",&MAX);
int array[MAX];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
scanf("%d",&x);
for(int i=0;i<n;i++)
{
if(array[i]==x)
{
pos=i;
}
}
if(pos==-1)
{
printf("Target Element Not Found\n");
for(int i=0;i<n;i++)
{
printf("%d ",array[i]);
}
exit(0);
}
for(int i=pos;i<n;i++)
{
array[i]=array[i+1];
}
printf("%d is deleted\n",x);
if(pos>=n-1){
printf("Array is Empty");
}
else{
for(int i=0;i<n-1;i++)
{
printf("%d ",array[i]);
}
}
}