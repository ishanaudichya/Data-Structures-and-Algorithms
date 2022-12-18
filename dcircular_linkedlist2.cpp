#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
struct node* prev;
int data;
struct node* next;
}node;
node* input()
{
int size;
scanf("%d",&size);
node *head=NULL;
node* tail=NULL;
int count =-1;
if (size==1)
{
node* newnode = (node*)malloc(sizeof(node));
newnode->prev=NULL;
newnode->next=NULL;
int element;
scanf("%d",&element);
newnode->data=element;
newnode->next = newnode;
newnode->prev = newnode;
head= newnode;
return head;
}
while(size!=0)
{
node* newnode = (node*)malloc(sizeof(node));
newnode->prev=NULL;
newnode->next=NULL;
int element;
scanf("%d",&element);
newnode->data=element;
if (count==-1)
{
head = newnode;
tail = newnode;
count++;
}
else
{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
size=size-1;
}
tail->next=head;
head->prev=tail;
return head;
}
void printlinkedlist(node* head)
{
if(head==NULL)
{
printf("List is Empty\n");
}
else
{
node* address=NULL;
printf("List->");
while (head!=address)
{
if(address==NULL)
{
address=head;
printf("%d->",head->data);
}
else
{
printf("%d->",head->data);
}
head=head->next;
}
printf("List\n");
}
}
void displaynextandprev(node* head)
{
node* address =NULL;
int target;
scanf("%d",&target);
while (head!=address && head->data!=target)
{
if(address==NULL)
{
address=head;
}
head=head->next;
}
if(head==address)
{
printf("Target Element is Not Found\n");
}
else
{
printf("Previous of %d:%d\n",head->data,head->prev->data);
printf("Next of %d:%d\n",head->data,head->next->data);
}
}
int main()
{
node* head=input();
displaynextandprev(head);
return 0;
}