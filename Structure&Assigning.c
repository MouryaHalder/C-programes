#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Create an instance of the structure
    struct Student student1;

    // Assign values to the members of the structure
    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.75;

    // Print the information of student1
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    // Copy the contents of student1 to another instance
    struct Student student2 = student1;

    // Print the information of student2
    printf("\nStudent 2 (copied from student 1):\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);

    return 0;
}
