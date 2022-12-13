#include <stdio.h>
#include <stdlib.h>
int main()
{
 int max,n;
 scanf("%d",&max);
 int a[max];
 scanf("%d",&n);
 for(int i=n-1;i>=0;i--){
 scanf("%d",&a[i]);
 }
 if(n>max){
 printf("Array is Full\n");
 for(int i=1;i<n;i++){
 printf("%d ",a[i]);
 }
 }
 else{
 for(int i=0;i<n;i++){
 printf("%d ",a[i]);
 }
 }
 return 0;
}