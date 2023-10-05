#include<stdio.h>

int main(){

int i,j,n1,n2,n3,a[50],b[50],c[50];

//first array insertion

printf("enter the limit of first array");
scanf("%d",&n1);

printf("enter the numbers of first array");
for(i=0;i<n1;i++){
scanf("%d",&a[i]);}

//second array insertion

    printf("enter the limit of second array");
    scanf("%d",&n2);

    printf("enter the numbers of second array");
    for(i=0;i<n2;i++){
    scanf("%d",&b[i]);}

//merging

   n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
       c[i] = a[i];
    for(i=0;i<n2;i++){
     c[i+n1]=b[i];}

printf("merged array\n");
for(i=0;i<n3;i++){
printf("%d\t",c[i]);}

//sorting

     printf("\narray after sorting\n");
     for(i=0;i<n3;i++){
     int temp;
     
           for(j=i+1;j<n3;j++){
           if (c[i]>c[j]){
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
              }
                 }
                    }

          for(i=0;i<n3;i++){
            printf("%d\t\n",c[i]);}
return 0;
}

