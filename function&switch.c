#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n,s,t,m,d;
printf("Enter any number : ");
scanf("%d", &a);
printf("Enter any number: ");
scanf("%d", &b);
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
scanf("%d",&n);
switch(n)
{
case 1:
s=sum(a,b);
printf("\nThe sum is %d",s);
break;
case 2:
t=sub(a,b);
printf("\n The Subtraction is %d",t);
break;
case 3:
m=mul(a,b);
printf("\n The multiplication is %d",m);
break;
case 4:
d = div(a,b);
printf("\n The Division is %d\n", d);
break;
default:
printf("\n Enter any valid choice");
}
getch();
}
int sum(int a,int b)
{
int r1;
r1=a+b;
return r1;
}
int sub(int a, int b)
{
int r2;
r2=a-b;
return r2;
}
int mul (int a , int b)
{
int r3;
r3=a*b;
return r3;
}
int div(int a,int b)
{
int r4;
if (a>b)
r4=a/b;
else
r4=b/a;
return r4;
}
