#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

// Function that takes a structure object as a formal parameter
void printStudentFormal(struct Student s) {
    printf("Inside printStudentFormal:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
}

int main() {
    // Create an instance of the structure
    struct Student student = {"Alice", 21, 3.85};

    // Passing structure object as a real parameter
    printf("Passing structure object as a real parameter:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("\n");

    // Passing structure object as a formal parameter
    printf("Passing structure object as a formal parameter:\n");
    printStudentFormal(student);

    return 0;
}
