#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0,sum,t,c,temp,rem,i;
i=1;
printf("Enter the number->");
scanf("%d",&num);
t=num;
// the following loop is used to count the number of digits in a number
while(t>0){
    t=t/10;
    count++;
}
printf("%d",count);//to confirm the value of count
temp=num;
c=0;
// the following loops have roles to sum the cube of each individual digits
while(temp>0){
    rem=temp%10;
    sum=1;
    i=1;
    while(i<=count){
    sum=sum*rem;
    i++;}

    c+=sum;
    temp/=10;
}
// the conditional statement checks if the criteria of armstrong numbers is fulfilled
(num=c)?(printf("\nThe number is armstrong number")):(printf("\nThe number is not a armstrong number"));

}