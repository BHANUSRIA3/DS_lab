#include<stdio.h>
#include<stdlib.h>
#define size 9
struct node{
int data;
struct node *next;
};
struct node *chain[size];
void init(){
for(int i=0;i<size;i++){
chain[i]=NULL;}}
void insert(int item){
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=item;
new->next=NULL;
int key=item%size;
if(chain[key]==NULL){
chain[key]=new;
}
else{
struct node *temp=chain[key];
while(temp->next){
temp=temp->next;
temp->next=new;
}}}
void print(){
for (int i=0;i<size;i++){
struct node *current=chain[i];
printf("chain[%d] ",i);
while(current){
printf("%3d",current->data);
current=current->next;}
printf("NULL\n");}}
int main(){
init();
insert(5);
insert(28);
insert(19);
insert(15);
insert(20);
insert(33);
insert(12);
insert(17);
insert(10);
print();
return 0;}
