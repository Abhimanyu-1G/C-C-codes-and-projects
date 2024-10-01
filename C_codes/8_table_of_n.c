#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,d,pro;
clrscr();
printf("Enter the number you want table of-");
scanf("%d",&n);
printf("till how much do you want table to-");
scanf("%d",&d);

for(i=0;i<=d;i++)
{
pro=n*i;
printf("%dx%d=%d \n",n,i,pro);
}
getch();
}

