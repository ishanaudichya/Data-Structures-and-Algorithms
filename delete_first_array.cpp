#include <stdio.h>
#include <stdlib.h>
int main()
{
 int max,n;
 scanf("%d",&max);
 int a[max];
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 printf("%d is deleted",a[0]);
 printf("\n");
 for(int i=0;i<n;i++){
 a[i]=a[i+1];
 }

 if(n-1==0){
 printf("Array is Empty");
 }
 else{
 for(int i=0;i<n-1;i++){
 printf("%d ",a[i]);
 }
 }
 return 0;
}