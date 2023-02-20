#include<stdio.h>
#include<conio.h>
#include<math.h>
int arm();
void main()
{
int a,b,c;
printf("Enter a Number:  \n");
scanf("%d",&a);
c=a;
b=arm(a);
if(c==b)
printf("\n The number is Armstrong");
else
printf("\n The number is not  Armstrong");
getch();
}
int arm(int a)
{
int r, s=0 ,t , sum ,p;
sum=0;
t=a;
while(a!=0)
{
r=a%10;
a=a/10;
s++;
}
printf("%d\n",s);
while(t!=0)
{
    p=t%10;
    t=t/10;
    sum=sum+pow(p,s);
}
return sum;
}
