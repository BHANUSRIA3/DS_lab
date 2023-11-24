#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[100],n,m,key,h,x,i;
int k=0;
printf("Enter the array size: ");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
a[i]=0;}
for(int j=0;j<n;j++){
printf("\n Enter the key: ");
scanf("%d",&key);
x=key%n;
if(a[x]==0){
a[x]=key;
}
else {
do
{
k++;
}
while(a[(x+k)%n]!=0);
a[((x+k)%n)]=key;
}
}
for(int i=0;i<n;i++){
printf("%d\t",a[i]);
}
}
