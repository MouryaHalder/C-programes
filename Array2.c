#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[4];
    for  (int i=0; i< 4; i++)
    {
        printf("Enter the value of %d elements of the array\n",i);
        scanf("%d", &marks[i]);
    }
    {
        printf("%d",marks);
    }
}
