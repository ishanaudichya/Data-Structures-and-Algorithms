#include <stdio.h>
#include <stdlib.h>
struct node{
 int data;
 struct node *prev;
 struct node *next;
};
struct node *head=NULL;
void insert(int x){
 struct node *temp;
 temp=malloc(sizeof(struct node));
 temp->data=x;

 if(head==NULL){
 head=temp;
 temp->prev=NULL;
 temp->next=NULL;
 }
 else if(head!=NULL){
 struct node *l;
 for(l=head;l->next!=NULL;l=l->next);
 l->next=temp;
 temp->prev=l;
 temp->next=NULL;
 }
}
void display(){
 struct node *l;
 printf("List->");
 for(l=head;l->next!=NULL;l=l->next){
 printf("%d->", l->data);
 }
 printf("%d", l->data);
 printf("->List\n");
}
void insert_before(int t, int x){

 struct node *l;
 for(l=head;l->data!=t;l=l->next){
 if(l->next==NULL){
 break;
 }
 }

 if(l->next==NULL && l->data!=t){
 printf("Target Element is Not Found");
 }
 else if(l->prev==NULL){
 struct node *newnode=malloc(sizeof(struct node));
 newnode->data=x;
 newnode->prev=NULL;
 newnode->next=l;
 l->prev=newnode;
 head=newnode;
 display();
 }
 else{
 struct node *newnode=malloc(sizeof(struct node));
 newnode->data=x;
 l->prev->next=newnode;
 newnode->prev=l->prev;
 l->prev=newnode;
 newnode->next=l;
 display();
 }
}
int main()
{
 int n;
 scanf("%d", &n);

 int i;
 for(i=0;i<n;i++){
 int x;
 scanf("%d", &x);
 insert(x);
 }
 display();

 int t,x;
 scanf("%d %d", &t, &x);

}