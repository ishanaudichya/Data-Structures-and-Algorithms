#include <stdio.h>
#include <stdlib.h>
int main()
{
 int max,n,k=0;
 scanf("%d",&max);
 int a[max];
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 int t,x;
 scanf("%d %d",&t,&x);

 for(int i=0;i<n;i++)
 {
 if(a[i]==t)
 {
 for(int j=max;j>i;j--)
 {
 a[j]=a[j-1];
 }
 a[i]=x;
 break;
 }

 else{
 k=k+1;
 }
 }

 if(k==n){
 printf("Target Element Not Found\n");
 for(int i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 }
 else{
 for(int i=0;i<n+1;i++){
 printf("%d ",a[i]);
 }
 }
 return 0;
}