#include <stdio.h>
#include <stdlib.h>
#define max 10
int main()
{
 int a[max];
 int n,l,inserted;
 scanf("%d", &l);
 scanf("%d", &n);
 for(int i = 0 ; i < n ; i++){
 scanf("%d",&a[i]);
 }
 scanf("%d",&inserted);

 if(n<l){
 a[n] = inserted;
 for(int i = 0 ; i < n ; i++){
 printf("%d ",a[i]);
 }
 }
 if(n == l){
 for(int i = 0 ; i < n ; i++){
 printf("%d ",a[i]);
 }
 }
 if(n>l){
 printf("Array is Full\n");
 for(int i = 0 ; i < n-1 ; i++){
 printf("%d ",a[i]);
 }
 }

 return 0;
}