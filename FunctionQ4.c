#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int s=sum(a,b); //call korche
    printf("sum is : %d ",s);
    return 0;
}
int sum(int a, int b) // opor ar a&b aty ja number dewa hocche ota NICHE a&b tay copy hoi jacche
{
    return a+ b; //Then a+b koray return hocche INT sum a tarpor ota return hocche tar opor ar ta tay gia then print hocche
}
