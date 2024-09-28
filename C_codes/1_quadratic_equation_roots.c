#include<stdio.h>
#include<math.h>

float main(){
float a,b,c;
float root1,root2;
printf("Give value of a b c->");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
printf("Quadratic equation is %fx^2+%fx+%f\n",a,b,c);
root1=(-b+sqrt((b*b)-(4*a*c)))/2*a;
root2=(-b-sqrt((b*b)-(4*a*c)))/2*a;
printf("Roots of equation are %f and %f",root1,root2);
}