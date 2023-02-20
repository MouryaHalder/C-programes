#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Enter third number: ");
    scanf("%d",&num3);

     if(num1>num2 && num1>num3)
        printf("\nFirst number: %d is greatest.",num1);
    else if(num2>num1 && num2>num3)
        printf("\nSecond number: %d is greatest.",num2);
    else if(num3>num1 && num3>num2)
        printf("\nThird number: %d is greatest.",num3);
    else
        printf("\nAll three numbers are equal.");

    if(num1 < num2 && num2 < num3)
        printf("\nSecond number: %d is medium.",num2);
    else if(num2 < num1 && num1 < num3)
        printf("\nFirst number: %d is medium",num1);
    else if(num1 < num3 && num3 < num2)
        printf("\nThird number: %d is medium",num3);
    else
        printf("\nAll three numbers are equal.");

    if(num1 < num2 && num1 < num3)
        printf("\nFirst number: %d is smallest. \n", num1);
    else if(num2 < num1 && num2 < num3)
        printf("\nSecond number: %d is smallest. \n", num2);
    else if(num3 < num1 && num3 < num2)
        printf("\nThird number: %d is smallest. \n", num3);
    else
        printf("\nAll three numbers are equal.");

    return 0;
}
