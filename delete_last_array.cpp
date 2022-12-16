#include <stdio.h>
#include <stdlib.h>
#define max 10
int main(){
 int a[max];
 int n,l;
 scanf("%d", &l);
 scanf("%d", &n);

 for(int i = 0 ; i < n ; i++){
 scanf("%d",&a[i]);
}
 if(n>0){
 printf("%d is deleted\n", a[n-1]);
 n--;
 for(int i =0 ; i < n ; i++){
 printf("%d ",a[i]);
 }
 }
 if(n==0) {
 printf("Array is Empty");
 }

 return 0;
}
