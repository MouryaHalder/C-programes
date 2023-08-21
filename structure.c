//Example of Structure
#include<stdio.h>
struct student  //struct is a keyword to decalre structure
{
    char name[20];
    int age;
};
int main()
{
    struct student s1; // s1 is the structure variable by which we can access member of student structure
    printf("Enter some info of a Student: \n");
    printf("Enter Student name: \n");
    gets(s1.name);
    printf("Enter Student age: \n");
    scanf("%d",&s1.age);
    printf("\tThe students details are given below-\n");
    printf("Student Name=%s\n",s1.name);
    printf("Student AGE=%d",s1.age);
return 0;
}
