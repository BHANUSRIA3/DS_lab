#include<stdio.h>
#define size 5
int q[size];
int f=-1;
int r=-1;
void enq(int data){
if (r==size-1){
printf("queue overflow\n");
return;
}
else if (f==-1){
f++;}
r++;
q[r]=data;
}
void dq(){
if (f==-1 || f>r){
printf("queue underflow\n");
return;
}
else {
printf("deleted element is %d\n",q[f]);
f++;}}
void display(){
if (f>r){
printf("queue is empty");}
else {
for (int i=f;i<=r;i++){
printf("%d\n",q[i]);
}}}
void main(){
enq(10);
enq(20);
enq(30);
enq(40);
enq(50);
display();
dq();
display();
dq();
display();
}
