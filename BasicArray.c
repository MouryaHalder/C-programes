#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5],i;
    printf("Enter 5 numbers:  \n");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    printf("The numbers entered are:\n");
    for(i=0;i<5;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}
