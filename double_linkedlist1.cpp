#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
 struct node *prev;
};
void trav(struct node* list){
 printf("List->");
 while(list!=0){
 if(list->next==NULL){
 printf("%d",list->data);
 list=list->next;
 }
 else{
 printf("%d ",list->data);
 list=list->next;
 }
 }
 printf("->NULL\n");
}
int main()
{
 struct node *List,*ele,*p;
 int n;
 scanf("%d",&n);
 List=NULL;
 for(int i=0;i<n;i++)
 {
 ele=malloc(sizeof(struct node));
 scanf("%d",&ele->data);
 ele->next=NULL;
 if(List==NULL){
 ele->prev=NULL;
 List=ele;
 }
 else{
 p->next=ele;
 ele->prev=p;
 }
 p=ele;
 }

 int t;
 scanf("%d",&t);

 trav(List);
 struct node* l=List;

 while(l->next!=NULL){
 l=l->next;
 }

 struct node *temp=malloc(sizeof(struct node));
 l->next=temp;
 temp->data=t;
 temp->prev=l;
 temp->next=NULL;
 trav(List);

 return 0;
}