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

 if(n==max){
 printf("Array is Full");
 }
 else{
 for(int i=0;i<n;i++)
 {
 if(i+1==t)
 {
 for(int j=max;j>i;j--)
 {
 a[j]=a[j-1];
 }
 a[t-1]=x;
 }

 else{
 k=k+1;
 }
 }

 if(k==n){
 printf("Position Not Found\n");
 }
 else{
 for(int i=0;i<n+1;i++){
 printf("%d ",a[i]);
 }
 }
 }

 return 0;
}