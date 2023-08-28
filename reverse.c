#include<stdio.h>
int main() {
int numbers[10];
int i;
printf("Enter 10 integers: \n");
for (i=0;i<10;i++)
{
printf("Number %d:",i+1);
scanf("%d",&numbers[i]);
}
printf("\n Numbers in reverse order is: ");
for(i=9;i>0;i--)
{
printf("%d\n",numbers[i]);
}
//
printf("\n");
return 0;
}
