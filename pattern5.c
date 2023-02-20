#include<stdio.h>
#include<conio.h>
void main()
{
    int k,j,i;
    for(i=1;i<=5;i++)
{
    for(k=1;k<=i-1;k++)
{
    printf("  ");
}
for(j=5;j>=i;j--)
{
    printf("*");
    }
    printf("\n");
}
}
