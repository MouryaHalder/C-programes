#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter First number: ");
scanf("%d",&a);
printf("Enter Second number: ");
scanf("%d",&b);
printf("Enter Third number: ");
scanf("%d",&c);
if(a>b&&a>c)                            //aii khan a sob kota variable k boro indicate koria diachi
    printf("\n%d is greatest.",a);
else if(b>a&&b>c)
    printf("\n%d is greatest.",b);
else if(c>a&&c>b)
    printf("\n%d is greatest.",c);               //G M S XXX
                                                 //M G S XXX
if(a < b && b < c)
    printf("\n%d is medium.",b);
    else if(b < a && a < c)
        printf("\nFirst number: %d is medium",a);
    else if(a < c && c < b)
        printf("\nThird number: %d is medium",c);

        if(a < b && a < c)
            printf("\nFirst number: %d is smallest. \n", a);
    else if(b < a && b < c)
        printf("\nSecond number: %d is smallest. \n", b);
    else if(c < a && c < b)
        printf("\nThird number: %d is smallest. \n", c);
}
