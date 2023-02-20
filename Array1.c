#include<stdio.h>
#include<conio.h>
int main()
{
    int ary[5],i;
    printf("Enter array ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=0;i<5; i++)
    {
        printf("%d\n",ary[i]);
    }
    return 0;
}
