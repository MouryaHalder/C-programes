#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the 1st number");
scanf("%d",&a);
printf("Enter the 2nd number");
scanf("%d",&b);
printf("press 1= +\n");
printf("press 2= -\n");
printf("press 3= *\n");
printf("press 4= /\n");
scanf("%d",&c);
int res;
switch (c)
{
case 1:
res = a+b;
break;
case 2:
res = a-b;
break;
case 3:
res = a*b;
break;
case 4:
res = a/b;
break;
}
printf("Answer=%d",res);
}
