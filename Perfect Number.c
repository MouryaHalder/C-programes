#include<stdio.h>
#include<conio.h>
void perfect(int n)
{
    int i,f=0;
    for (i=1;i<n;i++)
    {
        if(n%i==0)
            f=f+i;
    }
    if (f==n)
        printf("Perfect Number");
        else
            printf("Not perfect");
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    perfect(num);
}
