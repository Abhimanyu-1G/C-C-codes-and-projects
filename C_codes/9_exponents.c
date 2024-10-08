/*This program is used to obtain any number raised to any exponent 
given it is within the compilers range of data types*/
#include<stdio.h>
#include<conio.h>
void main()
{
float exp,i,num,res=1;
printf("Enter the base number:- ");
scanf("%f",&num);
printf("Enter the Exponent number:- ");
scanf("%f",&exp);
for(i=1;i<=exp;i++)
{
    res=res*num;
}
//the %.2f is used to limit the number of decimal places 
printf("The number %.2f raised %.2f to is %.2f",num,exp,res);
}
