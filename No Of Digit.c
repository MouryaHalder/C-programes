#include<conio.h>
#include<stdio.h>
void main()
{
int a,b=0,c,d=0;
printf("Enter 2 number: ");
scanf("%d%d",&a,&c);
while(a!=0)
{
a=a/10;
b++;
}
printf("The Number of digit is: %d\n",b);
while (c!=0)
{
    c=c/10;
    d++;
}
printf("The Number of digit is: %d\n",d);

if (b=b){
    printf("%d Present",b);
}
else if (b!=b);{
    printf("%d Not present",b);
}
if (d=d)
{
    printf("%d Present",d);
}
else if(d!=d);
{
    printf("%d Not present",d);
}
}
