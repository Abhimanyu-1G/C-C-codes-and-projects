#include<stdio.h>
#include<conio.h>
void main()
{
int num,p=0,i;
clrscr();
printf("Enter a number-");
scanf("%d",&num);
	for(i=2;i<=(num-1);i++)
	{
	(num%i==0)?p++:"";
	}
(p==0)?printf("%d is a prime number",num):printf("%d is not a prime number",num);
getch();
}
