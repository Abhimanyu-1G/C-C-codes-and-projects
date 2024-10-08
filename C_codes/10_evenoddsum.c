//to find the sum of forst n even and odd numbers by using loops
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=1,num,sum_even=0,sum_odd=0,t=0;
printf("Enter the number till which you want sum of:-");
scanf("%d",&num);
while(t<=num)
{
    sum_even+=t;
    t+=2;
}
printf("the sum of even number till %d is %d\n",num,sum_even);
while(n<=num)
{
    sum_odd+=n;
    n+=2;
}
printf("the sum of odd number till %d is %d\n",num,sum_odd);

/*//another meathod is to use the formulas

// int s=num/2;
// sum_even= s*(s+1);
// printf("sum of even is%d",sum_even);
// sum_odd=s*s;
// printf("sum of odd is %d",sum_odd);
*/
}
