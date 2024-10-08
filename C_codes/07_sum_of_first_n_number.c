#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,n;
clrscr();
printf("Enter the number of numbers you want sum of-");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("sum of first %d numbers is %d",n,sum);
getch();
}
