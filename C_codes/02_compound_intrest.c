#include<stdio.h>
#include<math.h>

float main(){
float p,r,n,t,a;
printf("Give value of p r n t->");
scanf("%f",&p); 
scanf("%f",&r);
scanf("%f",&n);
scanf("%f",&t);
a=p*pow((1+(r/(100*n))),(n*t));
printf("Total amount after compounding is %f\n",a);

}
