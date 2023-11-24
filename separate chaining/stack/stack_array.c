#include<stdio.h>
int a[5];
int top=-1;
void push(int value){
if(top==4){
printf("stack overflow");
}
else{
top++;
a[top]=value;
}}
void pop(){
if (top==-1){
printf("stack underflow");
}
else{
printf("deleted element is %d",a[top]);
top--;
}
}
void display(){
if(top==-1){
printf("stack is empty");
}
else{
for(int i=0;i<=top;i++){
printf("%d\n",a[i]);
}
printf("\n");
}
}
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
