#include<stdio.h>
#include<conio.h>
//declaration/prototype OR FUNCTION
void printfHello();   //void mane print to koray debay kintu kono value return korbay naa
int main()
{
printHello(); //function call (koto bar print korabo)
printGoodbye();
printHello();   //user jai bhabe call likhbay oii bhabe black scr a print hobe;
return  0; //{return 0} mne amader function sesh so programme sesh
}
//function defination
void printHello(){
printf("Hello World\n");
}
void printGoodbye(){
printf("Goodbye:)\n");
}
