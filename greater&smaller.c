#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter Two number: ");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("Greater number is %d\n",a);
printf("Smaller number is %d\n",b);
}
else if (b>a)
{
printf("Greater number is %d\n",b);
printf("Smaller Number is %d\n",a);
}
return 0; // its my choice to return 0 or not the code will run properly
}
