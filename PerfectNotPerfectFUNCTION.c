#include<stdio.h>
#include<conio.h>

int perfect ()
int main()
{
int num,s;
printf("Enter any integer number: ");
scanf("%d", &num);
s=perfect(num);
if (s==num)
printf("\n The entered number is %d  is a perfect number",num);
else
printf("\n The Entered number %d is not a perfect number",num);
getch();
return 0;
}
int perfect(int number)
{
int a=1;sum=0;
while (a<number)
{
if (number%a==0)
sum=sum+a;
a++;
}
return sum;
}

