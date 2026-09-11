#include <stdio.h>

struct Student
{
    char usn[20];
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter USN: ");
    scanf("%s", s.usn);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("USN   : %s\n", s.usn);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}