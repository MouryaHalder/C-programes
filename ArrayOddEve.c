#include<stdio.h>
int main(){
int num[5],i;
printf("Enter any 5 number: \n");
for (i=0;i<5;i++)
{
scanf("%d",&num[i]); //Loop Ta k Array ar bhetor korche
}
printf("Odd number:\n");
for(i=0;i<5;i++){
if(num[i]%2!=0){
printf("%d\n",num[i]);
}
}
printf("\nEven number: \n");
for(i=0;i<5;i++){
if(num[i]%2==0){
printf("%d\n",num[i]);
}
}
return 0;
}
