#include<stdio.h>
#include<conio.h>
int fact();
void main()
{
int a,b,i;
printf("Enter the limit: ");
scanf("%d", &a);
for(i=1;i<=a;i++)
{
b=fact(i);
printf("Factorial of the number is %d",b);
}
getch();
}
int fact(int a)
{
int j,fact;
fact=1;
for(j=1;j<=a;j++)
{
fact=fact*j;
}
return fact;
}
