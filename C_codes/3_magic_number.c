#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,i;
for(i=1;i<=10;i++)
{
    printf("%d,",c);
    a=b;
    b=c;
    c=a+b;
}
}