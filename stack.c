#include<stdio.h>
int stack[50],top=-1,value,i;

void push(){
if (top==50-1){
printf("stack overflow");
}
else{
stack[++top]=value;
printf("pushed %d into stack",value);}}

void pop(){

if(top==-1){printf("stack is empty");}
else{printf("popped %d",stack[top]);
top-- ;
}}

void display(){
if (top ==-1){printf("stack is empty");}
else{
printf("stack elements");
for(i=0;i<=top;i++){
printf("%d",stack[i]);}
printf("\n");}}

int main() {
    for(;;) {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        int choice,value;
        scanf("%d",&choice);
        switch(choice){
        case 1:
        printf("enter the value to push");
        scanf("%d",&stack[++top]);
        printf("value is a pushed");
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        display();
        break;
        case 4: 
        printf("exiting the program");
        return 0;
        break;
        
        defalut:
        printf("wrong choice");}}
        return 0;}
        


