#include<stdio.h>
int search(int a[],int n ,int key );

int main(){
int a[50],i,n,pos,re=-1;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}

printf("enter search key");
scanf("%d",&pos);

re=search(a,n,pos);
if (re!=-1){
printf("the key found at %d",re+1);}
else{
printf("not found");}
return 0;}


int search(int a[],int n,int key){
int i;
for (i=0;i<n;i++){
if (a[i]==key){
return i;}}
return -1;}
