#include<stdio.h>
int search (int a[],int left ,int right,int key );

int main(){
int a[50],i,n,pos,re=-1;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}

printf("enter search key");
scanf("%d",&pos);

re=search(a,0,n-1,pos);
if (re!=-1){
printf("the key found at %d",re+1);}
else{
printf("not found");}
return 0;}


int  search (int a[],int left,int right ,int key ){
 while (left<=right){
 int mid =left+(right-left)/2;
 if (a[mid]==key){
 return mid;}
 if (a[mid]<key){
 left=mid+1;}
 else {
 right=mid-1;}}
 return -1;}

