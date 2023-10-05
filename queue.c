#include<stdio.h>
int queue[50];
int front=-1,rear=-1;


void enqueue(int value){
rear=(rear+1)%50;
queue[rear]=value;
if(front==-1){
front=0;}}

void dequeue(){
if (front==-1){
printf("queue is empty");
}
else{
printf("%d dequeued",queue[front]);}
if(front==rear){
front==rear==-1;}}

void Front(){
if(front==-1){
printf("queue is empty");}
else{
printf("the front is: %d\n",queue[front]);}}

void Rear(){
if(rear==-1){
printf("queue is empty");}
else{
printf("the front is :%d\n",queue[rear]);}}

void display(){
if(front!=-1){
for(int i=front; i !=(rear+1)%50;i=(i+1)%50){
printf("%d",queue[i]);}
printf("\n");}}

int main(){
int choice,value;
do{


printf("1:enqueue\n");
printf("2:dequeue\n");
printf("3:front display\n");
printf("4:rear display\n");
printf("5:display program\n");
printf("6:exit code\n");
printf("\n enter your choice\n");
scanf("%d",&choice);


switch(choice){
case 1:printf("enter the value");
       scanf("%d",&value);
       enqueue(value);
       
break;

case 2:dequeue();
break;

case 3:
Front();
break;

case 4:
Rear();
break;

case 5:
display();
break;

case 6:
printf("see you later\n");
return 0;

default:
printf("wrong choice please select between 1-6");
}}
while (choice!=0);
return 0;}







