#include<stdio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack *next;
};
struct stack *top;
void push(int data){
struct stack *new=(struct stack*)malloc(sizeof(struct stack));
new->data=data;
new->next=NULL;
if (top==NULL){
top=new;
}
else{
new->next=top;
top=new;
}}
void pop(){
if (top==NULL){
printf("stack underflow\n");
}
else{
printf("deleted element is %d\n",top->data);
struct stack *temp;
temp=top->next;
top->next=NULL;
top=temp;}}
void display()
{
struct stack *temp=top;
while (temp!=NULL){
printf("%5d\t",temp->data);
temp=temp->next;
}}
int main(){
int choice;
int i=1;
while(i!=0){
printf("\n1.push\n2.pop\n3.display\n4.quit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice){
case 1:
int value;
printf("enter value to push:");
scanf("%d",&value);
push(value);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("exiting the program");
i=0;
break;
default:
printf("invalid choice");
}}
return 0;
}
