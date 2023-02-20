#include<stdio.h>
#include<conio.h>
//void printHello(); ---> Normal Function
//void printTable(int n)---> kono number nebay ar otar table print korabay tai or parameter a kono number nebay ota (int n)
// int  sum(int a,int b);---> return type  2 to number nicchay from a&b oder sum bar korche ar then ota k return korche;
void namaste();  //Prototype bania nilo
void bonjour();
int main() //Compiler sobar 1st a aii khan a check koray (jodi call na koray then print o korabay naa)
{
    printf("IF you are French press F if Indian press I:");
    char  ch;
    scanf("%c",&ch);
    if (ch=='i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namaste(){
printf("Namaste\n");
}
void  bonjour()
{
    printf("Bonjour\n");
}
