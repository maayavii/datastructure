#include<stdio.h>
struct distance {
int feet;
float inch;}
d1,d2,result;
int main(){

printf("enter the first distance");
printf("enter distance in feet");
scanf("%d", &d1.feet);
printf("enter distance in inch");
scanf("%f", &d1.inch);

printf("enter the second distance");
printf("enter distance in feet");
scanf("%int", &d2.feet);
printf("enter distance in inch");
scanf("%f", &d2.inch);

result.feet=d1.feet+d2.feet;
result.inch=d1.inch+d2.inch;
while (result.inch>12){
result.inch=result.inch-12.0;
++result.feet;}
printf("sum of distance:%d\n-%.1f\n",result.feet,result.inch);
return 0;}


