#include<stdio.h>
#include<stdlib.h>
struct q{
int data;
struct q *next;
};
struct q *f,*r=NULL;
void enq(int data){
struct q *current=(struct q*)malloc(sizeof(struct q));
current->data=data;
current->next=NULL;
if (f==r && r==NULL){
r=current;
f=current;
}
else{
r->next=current;
r=current;}}
void dq(){
if (f==NULL){
printf("queue underflow\n");
return;}
else{
printf("deleted element is %d\n",f->data);
f=f->next;
}}
void display(){
if(f==NULL){
printf("queue is empty\n");
return;
}
else{
struct q *temp=f;
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;}}}
int main(){
int choice;
int i=0;
while(i!=1){
printf("\n1.push\n2.pop\n3.display\n4.quit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice){
case 1:
int value;
printf("enter value to push:");
scanf("%d",&value);
enq(value);
break;
case 2:
dq();
break;
case 3:
display();
break;
case 4:
printf("exiting the program");
i=1;
break;
default:
printf("invalid choice");
}}
return 0;
}
